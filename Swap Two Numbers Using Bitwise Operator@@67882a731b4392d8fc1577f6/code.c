#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("%d %d", a,b);
   return 0;
}