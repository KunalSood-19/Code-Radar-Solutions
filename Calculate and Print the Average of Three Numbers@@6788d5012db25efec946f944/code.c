#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f",&c);
    float avg=(a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}