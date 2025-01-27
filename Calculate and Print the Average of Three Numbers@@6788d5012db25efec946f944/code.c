#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);
    int avg=(a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}