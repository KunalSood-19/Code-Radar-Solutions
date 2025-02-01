#include <stdio.h>
int main(){
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    if (((num<<n)&1)==1){
        printf("%d",((num<<n)==0));
    }else{
        printf("%d",((num<<n)==0));
    }return 0;
}