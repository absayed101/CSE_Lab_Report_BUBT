//WAP to check vowel or consonant

#include<stdio.h>
int main(){

    char ch;
    printf("Enter a alphabet : ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
        ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("The alphabet '%c' is vowel\n",ch);

    }
    else printf("The alphabet '%c' is consonant\n",ch);

    return 0;
}
