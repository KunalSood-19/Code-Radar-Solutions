#include <stdio.h>
int main(){
    int num,n;
    int count=0;
    scanf("%d",&n);
    while((num&1)==1){
        count+=1;
        printf("%d",count);
    }
    printf("%d",count);
    return 0;

}