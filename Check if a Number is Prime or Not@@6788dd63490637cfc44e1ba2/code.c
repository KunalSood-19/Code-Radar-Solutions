#include <stdio.h>
int main(){
    int a;
    if (a<=1){
        printf("Not Prime\n");
    }
    scanf("%d",&a);
    for (int i=2; i<a; i++){
        if (a%i==0){
            printf("Not Prime\n");
            break;
        }else{
            printf("Prime");
        }return 0;
    }
}