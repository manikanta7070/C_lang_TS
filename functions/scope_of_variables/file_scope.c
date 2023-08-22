#include <stdio.h>

// This is a file-scope variable
int fileScopedVar = 10;

void functionA() {
    printf("Value of fileScopedVar in functionA: %d\n", fileScopedVar);
}

int main() {
    printf("Value of fileScopedVar in main: %d\n", fileScopedVar);
    functionA();
    
    return 0;
}







