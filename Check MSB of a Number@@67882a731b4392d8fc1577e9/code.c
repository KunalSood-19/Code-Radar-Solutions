#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int r = 1&(n>>31);
    if (r==1){
        printf("Set");
    }else{
        printf("Not Set");
    }


    return 0;
}