#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    while ((n & 1) == 0 && (n != 0)) { // Fix parentheses and stopping condition
        n = n << 1;  // Left shift
        count++; 
    }
    
    printf("%d", count);
    return 0;
}





