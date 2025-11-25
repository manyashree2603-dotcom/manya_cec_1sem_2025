#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter a numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array Elements: ");
        for(int i=0;i<5;i++){
            if(arr[i]%2==0){
                printf("%d value is:%d\n",i+1,arr[i]);
            }
        }
        printf("Size of array:%d\n",sizeof(arr));
        printf("Length of array:%d\n",(sizeof(arr)/sizeof(arr[0])));
     }
