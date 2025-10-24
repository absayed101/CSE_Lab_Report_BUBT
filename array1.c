//WAP to read & print array

#include<stdio.h>
int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n],i;
    printf("Enter elements of Array : ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your array is : ");

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);

    }

    return 0;
}

