// While loop demo
// Written by Catherine Cheng 
// 16-06-2022

#include <stdio.h>
#define SIZE 4
int main(void) {
    /*
    // initialise a counter
    int i = 0;
    // condition
    while (i < SIZE) {
        // body/logic
        printf("%d\n", i);
        // increment the counter
        i = i + 1;
        // i++; i--;
    } */
    
    int n;
    scanf("%d", &n);
    int row = 0;
    while (row < n) {
        // How to print out 4x4 grid of X's
        // print XXXX
        int col = 0;
        while (col < n) {
            printf("X");
            col++;
        }
        printf("\n");
        row++;
    }
    
    
    return 0;
}

