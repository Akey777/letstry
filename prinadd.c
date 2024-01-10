#include <stdio.h>

int main() {
    int myVariable [9];

    // Print the address of myVariable using %p
    printf("Address of myVariable: %p\n",&myVariable[0]);
 printf("Address of myVariable: %p\n",&myVariable[1]);
  
 printf("Address of myVariable: %p\n",&myVariable[2]);
 
 printf("Address of myVariable: %p\n",&myVariable[3]);
 printf("Address of myVariable: %p\n",&myVariable[4]);
printf("Address of myVariable: %p\n",&myVariable[5]);
printf("Address of myVariable: %p\n",&myVariable[6]);

    return 0;
}
