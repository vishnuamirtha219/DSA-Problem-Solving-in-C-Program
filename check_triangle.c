#include <stdio.h>

int main() {

    int a=3, b=3, c=3;
    //scanf("%d %d %d", &a, &b, &c);

    // Step 1: Check if valid trianglecx 
    if (a + b <= c || b + c <= a || a + c <= b) {
        printf("Invalid");
    }
    else if (a == b && b == c) {
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }

    return 0;
}
