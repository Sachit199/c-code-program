#include <stdio.h>

int main() {
    float area;
    float radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area is: %f", area);
    return 0;
}