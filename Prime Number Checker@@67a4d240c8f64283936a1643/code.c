// Your code here...
#include <stdio.h>

int isPrime(int n){
    if (n < 2) return 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }return 1;
}


// #include <stdio.h>

// int isPrime(int n) {
//     if (n < 2) return 0; // 0 and 1 are not prime numbers

//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return 0; // Not a prime number
//         }
//     }
//     return 1; // Prime number
// }