#include <stdio.h>
void decimal(int n){
int binary[32];
int i=0;
while (n>0){
    binary[i]=n%2;
    n=n/2;
    i++;
}
for (int j=i-1; j>=0; j--){
    printf("%d",binary[j]);
   }
printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    decimal(n);
    return 0;
}




