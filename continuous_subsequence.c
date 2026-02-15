#include <stdio.h>
#include <stdbool.h>

int main() {

    int arr1[] = {1,2,3,4,2,3,5};
    int arr2[] = {2,3,5};

    int n1 = 7;
    int n2 = 3;

    bool found = false;

    for(int i = 0; i <= n1 - n2; i++) {

        int j;
        for(j = 0; j < n2; j++) {
            if(arr1[i + j] != arr2[j]) {
                break;
            }
        }

        if(j == n2) {
            found = true;
            break;
        }
    }

    if(found)
        printf("true");
    else
        printf("false");

    return 0;
}
