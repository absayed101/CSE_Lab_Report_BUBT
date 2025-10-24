//WAP to swap two numbers using third variable

#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("1st number after swap = %d\n",a);

    printf("2nd number after swap = %d\n",b);

    return 0;
}
