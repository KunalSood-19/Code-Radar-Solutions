#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (isupper(ch)){
        printf("Uppercase\n");
    }else if(islower(ch)){
        printf("Lowercase\n");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}


#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (isupper(ch)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }return 0;

}