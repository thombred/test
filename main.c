#include <stdio.h>

long f(long i) {
    long iters = 0;

    while(i > 1) {
        if(i % 2 == 0) {
            i /= 2;
        } else {
            // todo check if long is enough
            i = 3*i + 1;
        }
        iters += 1;
    }
    return iters;
}

//10: 5 16 8 4 2 1 (6)

int main() {
    printf("%ld\n", f(10));
    return 0;
}
