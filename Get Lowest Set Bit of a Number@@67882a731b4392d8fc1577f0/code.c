#include <stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d",&num);
    if (num==0){
        printf("-1");
        return 0;
    }
    while((num&1)==0){
        num>>=1;
        count++;
      
    }
    printf("%d",count);
    return 0;

}