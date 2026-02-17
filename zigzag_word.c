#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    char str[] = "HELLOWORLD";
    int n = strlen(str);
    int rows = 3;
    char zigzag[rows][MAX];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < n; j++) {
            zigzag[i][j] = ' ';
        }
    }

    int row = 0;
    int down = 1;

    for(int i = 0; i < n; i++) {

        zigzag[row][i] = str[i];

        if(row == rows - 1)
            down = 0;
        else if(row == 0)
            down = 1;

        if(down)
            row++;
        else
            row--;
    }


    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c ", zigzag[i][j]);
        }
        printf("\n");
    }

    return 0;
}
