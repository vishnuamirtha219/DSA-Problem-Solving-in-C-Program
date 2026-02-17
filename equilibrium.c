#include<stdio.h>
int eq(int arr[],int n){
    int totalsum=0;
    for (int i=0;i<n;i++){
        totalsum+=arr[i];
    }
    int leftsum=0;
    for(int i=0;i<n;i++){
        totalsum -=arr[i];
        if(leftsum ==totalsum){
            return i;
        }
        leftsum+=arr[i];
    }return -1;
}
int main(){
    int arr[]={1,3,5,2};
    int n=4;
    int result=eq(arr,n);
    printf("%d",result);
    return 0;
}