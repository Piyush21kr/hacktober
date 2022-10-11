#include<stdio.h>
int main(){
    int arr[100],n;
    int i,j;
    printf("enter size of an array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
