#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL, *temp;
void push(int a)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory is not allocated properly");
    }
    else
    {
        if(head==NULL)
        {
            new->data=a;
            new->next=NULL;
            head=new;
        }
        else
        {
            new->data=a;
            new->next=head;
            head=new;
        }
    }
}
void pop()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("the list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void display()
{
    temp=head;
    if(temp==NULL)
    {
        printf("no elements");
    }
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
        printf("\t");
    }
}
void main()
{
    push(55);
    push(77);
    push(30);
    push(45);
    display ();
    pop();    
}
