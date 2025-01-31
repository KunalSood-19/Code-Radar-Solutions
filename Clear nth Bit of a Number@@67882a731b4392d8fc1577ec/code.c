#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int r=(int)((a>>b)&0);
    printf("%d",r);
    return 0;
}