#include <stdio.h>

// Example of direct recursion: calculating factorial
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1)
        return 1;
    
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
