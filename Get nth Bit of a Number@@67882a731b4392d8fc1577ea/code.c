#include <stdio.h>
int main(){
    int a,p;
    scanf("%d",&a);
    scanf("%d",&p);
    int r=((a>>p)&1);
    printf("%d",r);
    return 0;
}