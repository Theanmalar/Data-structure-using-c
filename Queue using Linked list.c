#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node*next;
};
    struct node*front=NULL,*rear=NULL,*temp;
    void enqueue()
    {
        int data;
        struct node*new,*temp;
        printf("enter data:");
        scanf("%d",&data);
        new=(struct node*)malloc(sizeof(struct node));
        if(new==NULL)
        {
            printf("no memory ");
            
        }
        else
        {
            new->data=data;
            if(front==NULL)
            {
                front=new;
                rear=new;
                front->next=NULL;
                rear->next=NULL;
            }
            else{
                rear->next=new;
                new->next=NULL;
                rear=new;
            }
        }
    }
    void dequeue()
    {
        if(front==NULL)
        {
            printf("not possible");
        }
        else
        {
            temp=front;
            front=front->next;
            free(temp);
            
        }
    }
    
    void display()
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
    void main()
    {
        enqueue();
        enqueue();
        enqueue();
        display();
        dequeue();
        display();
    }
