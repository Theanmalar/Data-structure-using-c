#include<stdio.h>
#include<stdlib.h>
//operations on DLL
struct node {
    struct node*prev;
    int data;
    struct node* next;
}*temp,*head;

struct node* head = NULL;

struct node* getnode() {
    int value;
    struct node*new;
    new = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value of node: ");
    scanf("%d", &value);
    new->data = value;
    new->next = NULL;
    new->prev=NULL;
    return new;
}
void createlist(){
    int i,n;
        printf("Enter the no Of nodes:",i+1);
        scanf("%d",&n);
        for(i=0;i<n;i++){
            struct node*new=getnode();
            printf("Enter the data %d:",i+1);
            scanf("%d",&(new->data));
             if(head==NULL){
        struct node*new;
        head=new;
        head->next=NULL;
        head->prev=NULL;
    }else{
            new->next=temp;
            temp->prev=new;
            temp->next=NULL;
            head=new;
        }
        temp=new;
}}
void insertatfront() {
    struct node* new = getnode();
    if (head == NULL) {
        head = new;
    } else {
        new->next = head;
        head->prev=new;
        new->prev=NULL;
        head = new;
    }
}

void insertatmid() {
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    struct node* new = getnode();
    if (pos == 0) {
        insertatfront();
    } else {
        struct node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            head=temp;
            temp = temp->next;
        }
        head->next=new;
        new->next = temp;
        new->prev=head;
        temp->prev = new;
    }
}

void insertatend() {
    struct node* new = getnode();
    if (head == NULL) {
        new->prev=NULL;
        new->next=NULL;
        head = new;
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        temp->next = new;
        new->prev=temp;
        new->next=NULL;
    }
}
}
void deleteatfront() {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        struct node* temp = head;
        head = head->next;
        temp->next=NULL;
        head->prev=NULL;
        free(temp);
    }
}

void deleteatmid() {
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos == 0) {
        deleteatfront();
    } else {
        struct node*old=head,* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            old=temp;
            temp = temp->next;
        }
        struct node* s = temp->next;
        old->next = s;
        s->prev=old;
        free(temp);
    }
}

void deleteatend() {
    if (head == NULL) {
        printf("List is empty\n");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        struct node*old=head,* temp = head;
        while (temp->next!= NULL) {
            old=temp;
            temp = temp->next;
        }
        old->next=NULL;
        free(temp);
    }
}
void search() {
    int value;
    printf("Enter the value to search: ");
    scanf("%d", &value);
    struct node* temp = head;
    int found = 0;
    while (temp != NULL) {
        if (temp->data == value) {
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (found==1) {
        printf("Value found\n");
    } else {
        printf("Value not found\n");
    }
}

void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d-><- ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("The choices are:\n");
        printf("1.CREATE LIST\n");
        printf("2. INSERTION AT FRONT\n");
        printf("3. INSERTION AT MIDDLE\n");
        printf("4. INSERTION AT END\n");
        printf("5. DELETION AT FRONT\n");
        printf("6. DELETION AT MIDDLE\n");
        printf("7. DELETION AT END\n");
        printf("8. SEARCH\n");
        printf("9. DISPLAY\n");
        printf("10. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
            createlist();
            case 2:
                insertatfront();
                break;
            case 3:
                insertatmid();
                break;
            case 4:
                insertatend();
                break;
            case 5:
                deleteatfront();
                break;
            case 6:
                deleteatmid();
                break;
            case 7:
                deleteatend();
                break;
            case 8:
                search();
                break;
            case 9:
                display();
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
}
}
}
