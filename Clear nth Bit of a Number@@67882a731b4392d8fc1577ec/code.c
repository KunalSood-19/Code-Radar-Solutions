#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    ptintf("%d",((a>>b)&0));
    return 0;
}