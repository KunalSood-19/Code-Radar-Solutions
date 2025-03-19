Your code here...
#include <stdio.h>
int isPrime(int n){
    for(int i=2; i<=n; i++){
        if(n%i*i==0){
            return 0;
        }
    }return 1;
}