#include<stdio.h>
int main(){
    int num=100;
    int *ptr=&num;
    printf("Value of num:%d",num);
    printf("Value of num using ptr:%d\n",*ptr);
    printf("Value of ptr:%p\n",ptr);
}