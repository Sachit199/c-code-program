//wap to add two no without using arithematic operator
/*#include <stdio.h>
int add(int a, int b) {
    while (b != 0) {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

int main() {
    int a = 5, b = 7;
    int result = add(a, b);
    printf("Sum: %d\n", result);
    return 0;
}*/
#include <stdio.h>

int main() {
    int a = 9, b = 6;

    while (b != 0) {
        int carry = a & b;      
        a = a ^ b;
        b = carry << 1;        
    }

    printf("Sum = %d", a);
    return 0;
}