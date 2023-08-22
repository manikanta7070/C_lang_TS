#include <stdio.h>
// Function prototypes
void functionA(int n);
void functionB(int n);
// Indirect recursion example
void functionA(int n) {
    if (n > 0) {
        printf("A: %d\n", n);
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 1) {
        printf("B: %d\n", n);
        functionA(n / 2);
    }
}

int main() {
    int num = 10;
    functionA(num);
    return 0;
}

