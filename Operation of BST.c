// OPERATIONS IN  BST
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Insert 
struct Node* insert(struct Node* root, int data) {
    if (root==NULL) return createNode(data);
    if (data < root->data) root->left = insert(root->left, data);
    else if (data > root->data) root->right = insert(root->right, data);
    return root;
}
// Delete 
struct Node* deleteNode(struct Node* root, int data) {
    if (root==NULL) return root;

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // one child 
        if (root->left==NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right==NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        // 2 child 
        struct Node* temp = root->right;
        while (temp && temp->left) {
            temp = temp->left;
        } // copy IS - this
        root->data = temp->data;
        // delete IS node
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Search 
struct Node* search(struct Node* root, int data) {
    if (root==NULL || root->data == data) return root;
    if (data < root->data) return search(root->left, data);
    return search(root->right, data);
}
// Traversals
void inorder(struct Node* root)
{ 
    if (root) { inorder(root->left); printf("%d ", root->data); inorder(root->right); } 
}
void preorder(struct Node* root) { if (root) { printf("%d ", root->data); preorder(root->left); preorder(root->right); } }
void postorder(struct Node* root) { if (root) { postorder(root->left); postorder(root->right); printf("%d ", root->data); } }
void display(struct Node* root, int space) {
    if (root == NULL) return;
    
    space += 5;
    
    display(root->right, space);
    
    printf("\n");
    for (int i = 5; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);
    
    display(root->left, space);
}
int main() {
    struct Node* root = NULL;
    int choice, value;
    while (1) {
        printf("\nThe choices are:\n1. Insert\n2. Delete\n3. Search\n4. Inorder\n5. Preorder\n6. Postorder\n7.dispay\n8.Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter value: "); 
            scanf("%d", &value); 
            root = insert(root, value);
        } else if (choice == 2) {
            printf("Enter value to delete: "); 
            scanf("%d", &value); 
            root = deleteNode(root, value);
        } else if (choice == 3) {
            printf("Enter value to search: "); 
            scanf("%d", &value);
            printf(search(root, value) ? "%d found.\n" : "%d not found.\n", value);
        } else if (choice == 4) {
            printf("Inorder: "); 
            inorder(root); 
            printf("\n");
        } else if (choice == 5) {
            printf("Preorder: "); 
            preorder(root); 
            printf("\n");
        } else if (choice == 6) {
            printf("Postorder: "); 
            postorder(root); 
            printf("\n");
        }
        else if (choice==7){
            printf("Tree structure ");
            display(root,0);}
            else if (choice == 8) {
            exit(0);
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
