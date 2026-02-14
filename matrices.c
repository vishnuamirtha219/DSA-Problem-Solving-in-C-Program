#include<stdio.h>
int main(){

    int n=3, m=5;
    int matrix [3][5]={
        {3,0,2,6,8},
        {5,0,-1,-1,1},
        {5,2,4,9,7},
    };
    
    int top=0;
    int bottom=n-1;
    int left =0;
    int right= m-1;

    while(top<=bottom && left<=right){
        
        for (int i=left;i<=right;i++)
        printf("%d ",matrix[top][i]);
        top++;

        for (int i=top;i<=bottom;i++)
        printf("%d ",matrix[i][right]);
        right--;
        
        if(top<=bottom){
            for (int i=right;i>=left;i--)
            printf("%d ",matrix[bottom][i]); 
            bottom--;
        }

        if(left<=right){
            for(int i=bottom;i>=top;i--)
            printf("%d ",matrix[i][left]);
            left++;
        }
    }return 0;
}