#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    count=0;
    while(n!=1){
        n<<=1;
        count++;
    }
    printf("%d",count-1);
    return 0;
}