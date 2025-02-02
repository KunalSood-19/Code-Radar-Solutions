#include <stdio.h>
void decimal(int n){
int binary[i]=0;
int i=0;
while (n>0){
    binar[i]=n%2;
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
    scanf("%s",&n);
    binary(n);
    return 0;
}
