// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//     int n;
//     scanf("%d",&n);
//    // int r = (1<<31)&n;
//     if (n&(1<<31)){
//         printf("Set");
//     }else{
//         printf("Not Set");
//     }


//     return 0;
// }


#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if ((num&(1<<31))){
    printf("Set");
    }else{
        printf("Not Set");
    }return 0;
}













