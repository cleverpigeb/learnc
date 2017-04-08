/*习题 2-2*/

#include <stdio.h>

int main(void) {
    int i;

    for(i = 100; i <= 999; i++) {
        if(i == (i % 100) * (i % 100) + (i % 10) * (i % 10) + (i % 1) * (i % 1)) {
            printf("%d\n", i);
        }
    }

    return 0;
}