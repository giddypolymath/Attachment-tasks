#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n"); // Multiple of both 3 and 5
        } else if (i % 3 == 0) {
            printf("Fizz\n"); // Multiple of 3
        } else if (i % 5 == 0) {
            printf("Buzz\n"); // Multiple of 5
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
