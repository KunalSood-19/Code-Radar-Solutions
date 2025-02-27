
#include <stdio.h>

int main() {
    int n, num = 1;  // Start with 1
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Rows
        for (int j = 1; j <= i; j++) {  // Columns
            printf("%d ", num);
            num = 1 - num;  // Toggle between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
