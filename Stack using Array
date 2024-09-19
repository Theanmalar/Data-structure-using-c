#include <stdio.h>
#define max 100
int a[max];
int top=-1;
void push(int data)
{
    if(top==max-1)
    {
        printf("overflow");
    }
    else
    {
        top=top+1;
        a[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        top=top-1;
    }
    }
void display()
{
    for(int i=top;i>=0;i--)
{
    printf("%d",a[i]);
    printf("\t");
  
}
   if(top == -1) 
   {
       printf("stack is empty");
   }
   printf("\n");
}

void main()
{
    push(55);
    push(65);
    push(77);
    push(95);
    display();
    pop();
    display();
}
