#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&b);
    scanf("%d",&a);
    
    printf("%d",((a>>b)&0));
    return 0;
}