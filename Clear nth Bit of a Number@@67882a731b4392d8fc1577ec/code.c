#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a);
    printf("%d",(a>>n)&0);
    return 0;
}