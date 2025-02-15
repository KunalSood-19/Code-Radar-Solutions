#include <stdio.h>

int countLeadingZeros(int n) {
    if (n == 0) return 32; // Special case: all bits are 0

    int count = 0;
    while ((n & (1 << 31)) == 0) { // Check MSB (bit 31)
        count++;
        n <<= 1; // Shift left to bring the next bit to MSB
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countLeadingZeros(n));
    return 0;
}
