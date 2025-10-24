//WAP max & min elements

#include<stdio.h>
int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n],i,terget,check=0;
    printf("Enter elements of Array : ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter terget number : ");
    scanf("%d",&terget);

    for(i=0;i<n;i++){
        if(arr[i]==terget){
            check=1;
            break;
        }
    }

    if(check==1){
        printf("Found in index %d",i+1);
    }
    else{
        printf("Not fdound");
    }
    return 0;
}
