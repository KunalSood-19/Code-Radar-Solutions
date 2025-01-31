#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int r=n&(1<<31);
    printf("%d",r);
    return 0;
}