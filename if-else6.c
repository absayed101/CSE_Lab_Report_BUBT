//WAP to check alphabet,uppercase,lowercase,digit or special character

#include<stdio.h>
int main(){

    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("The character is Alphabet\n");
        if(ch>='a' && ch<='z'){
           printf("And it is a lowercase\n");
        }else printf("And it is a uppercase\n");

    }else if(ch>='0' && ch<='9'){
        printf("The character is a Digit\n");
    }else printf("The character is a Special Character\n");

    return 0;
}
