#include <stdio.h>
int main(){
    int age;
    int c;
    scanf("%d",&age);
    scanf("%d",&c);
    if (age>=18 && c==1){
        printf("Eligible");
    }else if(age>=18 && c==0){
        printf("Not Eligible");
    }else if(age<18 && c==1){
        printf("Not Eligible");
    }else{
        printf("Not Eligible");
    }return 0;
}