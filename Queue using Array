#include<stdio.h>
#define max 10
int a[max];
int front=-1;
int rear=-1;
void enqueue(int data)
{
    if (front==(rear+1)%max)
    {
        printf("overflow");
    }
   
    
    else if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            a[rear]=data;
        }
    
        else
        {
            rear=(rear+1)%max;
            a[rear]=data;
        }
    }

    void dequeue()
    {
        if(front==-1 && rear==-1)
        {
            printf("underflow");
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
       {
          front=(front+1)%max;
        }
    }
    void display()
    {
        int i=front;
        if(front==-1 && rear==-1)
        {
            printf("queue is empty ");
        }
        else
        {
            while(i<=rear)
            {
                printf("%d",a[i]);
                i=(i+1)%max;
                printf("\t");
            }
        }
        printf("\n");
    }
    void main()
    {
        enqueue(5);
        enqueue(10);
        enqueue(15);
        enqueue(20);
        dequeue();
        display ();
        printf("\t");
    }
