#include <stdio.h>
int main(){
    int a,p;
    scanf("%d",&p);
    scanf("%d",&a);
    
    int r=((a>>p)&1);
    printf("%d",r);
   
    return 0;
}