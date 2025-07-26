#include<stdio.h>
int bs(int a[],int n,int key)
{
int low=0;
int high=n-1;
while(low<=high)
{
int mid=(low+high)/2;
if(a[mid]==key)
{

return mid;

}
else if (a[mid]<key)
{
low=mid+1;
}
else{
high=mid-1;
}
}
return -1;

}
int main()
{
int i,n,key;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to search:");
scanf("%d",&key);
int result=bs(a,n,key);
if(result != -1)
{
printf("element found at pos  %d\n",result);
}
else{
printf("element not found");
}
return 0;
}
