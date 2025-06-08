#include <stdio.h>

int main(void) {
    int x;
    printf("Enter an integer: ");
    if (scanf("%d", &x) != 1) return 1;

    int last = x % 10;
    if (last < 0) last = -last;
    printf("Last digit: %d\n", last);
    return 0;
}
