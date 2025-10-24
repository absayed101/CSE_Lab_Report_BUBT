//WAP to input radius of a circle from user and find diameter,circumference and area of circle.

#include<stdio.h>
int main(){

    float radius;
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);

    printf("The diameter of thr circle is : %.2f\n",2*radius);

    printf("The circumference of the circle is : %.2f\n",2*3.15*radius);

    printf("The area of the circle is : %.2f\n",3.15*radius*radius);

    return 0;
}
