// Function, struct, enum demo
// Written by Catherine Cheng 
// 23-06-2022
#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
};

enum main_colours {
    RED,
    GREEN,
    BLUE,
};
struct colour make_color(int r, int g, int b);
int main (void) {

    struct colour purple = make_color(100, 0, 100);
    struct colour brown = make_color(100, 100, 100);
    
    return 0;
}


// Write a function called make_color which takes three integers and returns a struct colour
struct colour make_color(int r, int g, int b) {
    struct colour c; // "struct colour" is type, "c" variable name
    c.red = r;
    c.green = g;
    c.blue = b;
    return c;
}



// In the kahoot we will write:
// - a function that determines the dominating/main colour component in a colour
// - a function that calculates brightness of a colour
// - a function that calculates average brightness of 100 colours






