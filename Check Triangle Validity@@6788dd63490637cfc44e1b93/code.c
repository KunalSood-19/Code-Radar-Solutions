#include <stdio.h>
int main(){
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if ((a<b) && (c>b) && (c>a)){
        printf("Valid");
    }else{
        printf("Invalid");
    }return 0;
}