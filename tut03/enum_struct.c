// Enum and struct demo
// Written by Catherine Cheng 
// 16-06-2022

#include <stdio.h>

enum position {
    laying_down, // 0
    sitting, // 1
    tummy_up // 2
};

struct pet {
    double age;
    enum position body_position;
    int height_above_ground;
};

int main (void) {
   struct pet dog;
   //struct pet cat;
   dog.age = 3.5;
   dog.height_above_ground = 1;
   dog.body_position = 0; // dog.body_position = laying_down;
   if (dog.body_position == laying_down) {
        printf("dog sleepy\n");
   }
  
}
