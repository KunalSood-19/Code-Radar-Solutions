#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &ch);
    switch(ch){
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*';
        printf("%d\n",a*b);
        break;
        case '/':
        if (b!=0){
            printf("%d\n",a/b);
        }else{
            printf("error:invalid operator\n");
        }
        break;
        default:
        printf("error:invalid operator");
    }return 0;
}