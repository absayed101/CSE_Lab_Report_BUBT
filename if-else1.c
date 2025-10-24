#include<stdio.h>
int main(){
    float centi,fahren;
    printf("Enter temperature in Centigraate : ");
    scanf("%f",&centi);

    fahren = (9*centi+160)/5;

    printf("The temperature in Fahrenheit is : %.2f",fahren);
    return 0;
}
