#include <stdio.h>
int main(){
    int n,a;
    
    scanf("%d",&n);
    
    printf("%d",(~(1<<n))&a);
    return 0;
}