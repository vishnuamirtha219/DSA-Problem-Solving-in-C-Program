#include <stdio.h>
#include<string.h>

int main(){

    char s[]="aabbc";
    int freq[256]={0};
    int n=strlen(s);

    for (int i=0;i<n;i++)
    freq[s[i]]++;

    for(int i=0;i<n;i++){
        if(freq[s[i]]==1){
            printf("%d\n",i);
        return 0;
        }
    }
    printf("-1\n");
    return 0;
}