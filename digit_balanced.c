#include <stdio.h>
#include <string.h>

int main() {

    char num[100]={1,2,3,3,2,1};

    int len = strlen(num);
    int leftSum = 0, rightSum = 0;

    for(int i = 0; i < len / 2; i++) {
        leftSum += num[i] - '0';
    }

    int start;

    if(len % 2 == 0)
        start = len / 2;
    else
        start = len / 2 + 1;

    for(int i = start; i < len; i++) {
        rightSum += num[i] - '0';
    }

    if(leftSum == rightSum)
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}
