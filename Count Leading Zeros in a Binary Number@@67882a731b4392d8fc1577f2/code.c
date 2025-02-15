#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    while (n != (1 << 31)) { // Stop when MSB is set
        n = n << 1;
        count++;
    }

    printf("%d", count);
    return 0;
}




