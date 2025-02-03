#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average\n");
        break;
        case 'F':
        printf("Fail\n");
        break;
        default:
        printf("Invalid grade");
    }return 0;
}