//WAP to find maximum between three numbers using nested if-else

#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c) printf("1st number %d is maximum",a);

        else printf("3rd number %d is maximum",c);

    }else if(b>c){
        if(b>a) printf("2nd number %d is maximum",b);

        else printf("3rd number %d is maximum",c);

    }else printf("3rd number %d is maximum",c);

    return 0;
}
