#include <stdio.h>

struct Part
{
    int partno;
    float price;
};

int main()
{
    struct Part p1, p2;
    printf("Enter Part number: ");
    scanf("%d", &p1.partno);
    printf("Enter Price: ");
    scanf("%f", &p1.price);
    p2 = p1;

    
    printf("Part number: %d\n", p2.partno);
    printf("Price: %.2f\n", p2.price);

    return 0;
}
