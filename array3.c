//WAP sum of all elements

#include<stdio.h>
int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n],i,sum=0;
    printf("Enter elements of Array : ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("Sum of all elements is : %d",sum);
    return 0;
}
