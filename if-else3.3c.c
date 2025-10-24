//WAP to swap two numbers using arithmetic operator

#include<stdio.h>
int main(){

    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("1st number after swap = %d\n",a);

    printf("2nd number after swap = %d\n",b);

    return 0;
}
