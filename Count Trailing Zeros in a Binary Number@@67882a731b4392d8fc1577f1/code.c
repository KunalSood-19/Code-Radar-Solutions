#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    while(num!=1){
        num<<=1;
        count++;
    }
    return 0;
}