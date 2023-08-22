#include <stdio.h>

// This is a global variable with program scope
int globalVar = 42;

void functionA() {
    printf("Value of globalVar in functionA: %d\n", globalVar);
}

void functionB() {
    printf("Value of globalVar in functionB: %d\n", globalVar);
}

int main() {
    printf("Value of globalVar in main: %d\n", globalVar);
    functionA();
    functionB();
    
    return 0;
}
