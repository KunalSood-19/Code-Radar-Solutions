#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Print decreasing numbers
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
