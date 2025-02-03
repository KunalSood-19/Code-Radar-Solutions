#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=2; i<a; i++){
        if (a%i){
            printf("Prime");
        }else{
            printf("Not Prime");
        }return 0;
    }
}