#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a); 
    int r=a&(1<<n);
    printf("%d",r);
    return 0;
}