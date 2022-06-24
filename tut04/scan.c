// Program that scans values into an array.

#include <stdio.h>

int main(void) {
    // how to scan values into an array until ctrl+d is pressed/end of input
    int array[100];
    int i = 0;
    while(scanf("%d", &array[i]) == 1) {
        i++;
    }
    return 0;
}

