//WAP max & min elements

#include<stdio.h>
int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n],i,max,min;
    printf("Enter elements of Array : ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i<min]){
            min=arr[i];
        }
    }
    printf("Maximum element is : %d\n",max);
    printf("Minimum element is : %d",min);
    return 0;
}
