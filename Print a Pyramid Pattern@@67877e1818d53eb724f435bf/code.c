// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     for (int i=1; i<=a; i++){
//         for (int j=1; j<=a-i; j++){
//             printf(" ");}
//         for (int k=1; k<=(2*i-1); k++){
//             printf("*");
//         }
//         printf("\n");
//     }return 0;
// }

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = i;j<n;j++){
            printf(" ");
        }
        for(int k = 1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}