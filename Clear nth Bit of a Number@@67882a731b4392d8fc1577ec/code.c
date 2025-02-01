#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a); 
    int r=(~(1<<(n)&a));
    printf("%d",r);
    return 0;
}