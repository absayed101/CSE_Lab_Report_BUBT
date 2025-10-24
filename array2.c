//WAP to print negative elements

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
    printf("All negative elements are : ");

    for(i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }

    }

    return 0;
}

