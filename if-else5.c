//WAP to check leap year

#include<stdio.h>
int main(){

    int a;
    printf("Enter a year : ");
    scanf("%d",&a);

    if((a%4==0 && a%100!=0) || a%400==0){
        printf("The year is a 'Leap Year'");

    }else printf("The year is a 'Not a Leap Year'");

    return 0;
}
