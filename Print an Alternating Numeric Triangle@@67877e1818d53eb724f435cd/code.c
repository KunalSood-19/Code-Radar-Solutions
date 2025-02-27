#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = (i % 2 == 0) ? 0 : 1;  // Even rows start with 0, odd rows with 1
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num;  // Toggle between 1 and 0
        }

        printf("\n");  // Move to next line after each row
    }

    return 0;
}
