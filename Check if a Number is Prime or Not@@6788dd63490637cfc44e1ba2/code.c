// #include <stdio.h>
// int main(){
//     int a,i;
//     scanf("%d",&a);
//     if (a<=1){
//         printf("Not Prime");
//     }
//     for (int i=2; i*i<=a; i++){
//         if (a%i==0){
//             printf("Not Prime\n");
//             return 0; 
    
//         }
//     }printf("Prime\n");
//     return 0;
// }

















#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
         if (a<=1){
        printf("Not Prime");
    }
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            printf("Not Prime");
            return 0;
        }
            printf("Prime");
            return 0;
    }
}