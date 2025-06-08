#include <stdio.h>

int main(void) {
    int count;
    float price;
    printf("Enter number of items and unit price: ");
    if (scanf("%d %f", &count, &price) != 2) return 1;

    printf("Total cost: %.2f\n", count * price);
    return 0;
}
