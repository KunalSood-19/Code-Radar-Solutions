// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//     int a;
//     scanf("%d",&a);
//     int n = a&1;
//     if(n==1){
//         printf("Set");
//     }else{
//         printf("Not Set");
//     }
//     return 0;
// }







#include <stdio.h>
int main(){
    int num,n;
    scanf("%d",&num);
    int r=(1&num);
    if (r==1){
        printf("Set");
    }else{
        printf("Not Set");
    }return 0;
}















