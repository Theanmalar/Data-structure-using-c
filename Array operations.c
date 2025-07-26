#include<stdio.h>
int main(){
    int i,j,n,check,flag=0,temp,choice,pos,val;
    int arr[20];
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The choiceses are:\n");
    printf("1.INSERTION\n");
    printf("2.DELETION\n");
    printf("3.SEARCHING\n");
    printf("4.SORTING\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    int insert(){
        printf("Enter the postion:");
        scanf("%d",&pos);
        printf("Enter the value:");
        scanf("%d",&val);
        for(i=n-1;i>=pos;i--){
            arr[i+1]=arr[i];
            arr[pos-1]=val;}
            printf("Elements are:");
            for(i=0;i<=n;i++){
                printf("%d\n",arr[i]);
            }
        }
     int delete(){
        printf("Enter the postion:");
        scanf("%d",&pos);
        if(pos>=n+1){
            printf("Deletion not possible");
        }else{
            for(i=pos-1;i<n-1;i++){
                arr[i]=arr[i+1];}
                printf("The elements are:");
                for(i=0;i<n-1;i++){
                    printf("%d\n",arr[i]);
                }
            }
        }
     int search(){
         printf("Enter the element to check:");
         scanf("%d",&check);
         for(i=0;i<n;i++){
             if(check==arr[i]){
                 flag=1;
                 break;
             }
         }
         if(flag==1){
             printf("Number is present in the array");
         }else{
             printf("no it is not present");
         }
     }
      int sort(){
          for(i=0;i<n;i++){
              for(j=i+1;j<n;j++){
                  if(arr[i]>arr[j]){
                      temp = arr[i];
                      arr[i] = arr[j];
                      arr[j] = temp;
                  }
              }
          }printf("The elements are:");
          for(i=0;i<n;i++){
              printf("%d\n",arr[i]);
          }}
     switch(choice){
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        case 3:
        search();
        break;
        case 4:
        sort();
        break;
        default:
        printf("Choice is invalid");
        return 0;
    }}
