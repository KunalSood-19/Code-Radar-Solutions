#include <stdio.h>
int main(){
    char ch;
    int a,b;
    scanf("%d",&a\n);
    scanf("%d",&b\n);
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