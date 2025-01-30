#include <stdio.h>
int main(){
    int a,b;
    scnaf("%d",&a);
    scanf("&d",&b);
    int result=(a<<b);
    printf("%d",result);
    return 0;
}