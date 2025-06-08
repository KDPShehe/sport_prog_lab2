#include <stdio.h>

int main(void) {
    float d1 = 120.0f, t1 = 2.0f;
    float d2 =  80.0f, t2 = 1.0f;

    float avg = (d1 + d2) / (t1 + t2);
    printf("Average speed: %.2f km/h\n", avg);
    return 0;
}
