#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a); 
    int r=a&~(1<<(n-1));
    printf("%d",r);
    return 0;
}