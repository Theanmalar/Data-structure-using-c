Bubble sort 
#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp;
    printf("enter the size:");
    scanf("%d", &n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
               a[j] = a[j+1];
               a[j+1]=temp;
            }
        }
    }
    printf("\nascending order:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\ndescending order:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    
}
