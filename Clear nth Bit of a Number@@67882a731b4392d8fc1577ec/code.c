#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a);
    printf("%d",a&~(1<<n));
    return 0;
}