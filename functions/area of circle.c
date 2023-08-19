#include <stdio.h>
float calculateCircleArea(float radius) {
    return 3.14159 * radius * radius;  // Using the formula: p * r^2
}

int main() {
    float radius;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    float area = calculateCircleArea(radius);
    printf("The area of the circle is: %.2f\n", area);
    
    return 0;
}
