#include <stdio.h>
int main(){
    char ch;
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&ch);
    switch(ch){
        case '+':
        printf("%c",a+b);
        break;
        case '-':
        printf("%c",a-b);
        break;
        case '*';
        printf("%c",a*b);
        break;
        case '/':
        printf("%c",a/b);
        break;
        default:
        printf("error");
    }return 0;
}