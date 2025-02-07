#include <stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int r=((n>>p)&1);
    printf("%d",r);
    return 0;
}