#include <stdio.h>
int main(){
    int a,p;
    scanf("%d",&p);
    scanf("%d",&a);
    
    if ((a>>p)&1){
        printf("%d",1);
    }else{
        printf("%d",0);
    }return 0;
}