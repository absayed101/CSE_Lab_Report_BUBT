//WAP to calculate grade

#include<stdio.h>
int main(){

    float grade;
    printf("Enter grade number : ");
    scanf("%f",&grade);

    if(grade>=80 && grade<=100){
        printf("Grade A+");
    }else if(grade>=70 && grade<80){
        printf("Grade A");
    }else if(grade>=60 && grade<70){
        printf("Grade A-");
    }else if(grade>=50 && grade<60){
        printf("Grade B");
    }else{
        printf("Grade F");
    }

    return 0;
}
