#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    while((n&1==0)&&(n!=1)){
        n<<1;
        count++;
    }
    printf("%d",count);
    return 0;
}


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
    int num,count=0;
    scanf("%d",&num);
    int i=0;
    while((i==0) &&(i!=1)){
        count+=1;
        i++;
    }printf("%d",count);
    return 0;
}













