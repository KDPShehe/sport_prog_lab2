#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a three-digit integer: ");
    if (scanf("%d", &n) != 1) return 1;

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    int rev = c*100 + b*10 + a;
    printf("Reversed number: %d\n", rev);
    return 0;
}
