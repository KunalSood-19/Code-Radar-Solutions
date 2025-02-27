#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for triangle shape
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }

        int num = (i % 2 == 0) ? 0 : 1;  // Start with 0 for even rows, 1 for odd rows
        
        for (int j = 1; j <= i; j++) {
            printf("%d ",num);
            num = 1 - num;  // Toggle between 1 and 0
        }

        printf("\n");
    }

    return 0;
}
