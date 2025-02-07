#include <stdio.h>
int main(){
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n); 
    int r=0&(num>>n);
    // int r=num&~(1<<n);
    printf("%d",r);
    return 0;
}