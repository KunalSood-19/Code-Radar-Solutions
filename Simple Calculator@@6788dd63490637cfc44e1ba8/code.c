#include <stdio.h>
int main(){
    char ch;
    int a,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%c\n",&ch);
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