// #include <stdio.h>
// int main(){
//     int n;
//     int count=0;
//     scanf("%d",&n);
//     while((n&1==0)&&(n!=1)){
//         n<<1;
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n,count=0;
//     scanf("%d",&n);
//     while((n&1==0) && (n!=1)){
//         n=n<<1;
//         count++; 
//      }
//      printf("%d",count);
//      return 0;
// }



#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    while((n==0) &&(n!=1)){
        count+=1;
        n=n<<1;
    }
    printf("%d",count);
    return 0;
}













