#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    count=0;
    while(n!=0){
        n<<=1;
        count++;
        count-=1;
    }
    printf("%d",count);
    return 0;
}