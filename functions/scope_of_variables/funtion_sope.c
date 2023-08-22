#include <stdio.h>

void functionA() {
    int x = 5;
    printf("Value of x in functionA: %d\n", x);
}

void functionB() {
    int x = 15;
    printf("Value of x in functionB: %d\n", x);
}

int main() {
    functionA();
    functionB();
    
    return 0;
}
