#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int arr1[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr1[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            arr1[j]=arr[i];
            j++;
        }
    }
    printf("The array after rotation is :");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}