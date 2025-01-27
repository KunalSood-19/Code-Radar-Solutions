#include <stdio.h>
int main(){
    char name[20];
    char h[10];
    int a;
    scanf("%s",&name);
    scanf("%d",&a);
    scanf("%s",&h);
    printf("Name: %s\n",name);
    printf("Age: %d\n",a);
    printf("Hobby: %s", h);
    return 0;
}