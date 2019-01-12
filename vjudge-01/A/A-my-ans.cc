// Accepted
// Frank Curie 2018.1.12
// https://vjudge.net/contest/277361#problem/A
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
bool is_prime(int n);
bool in_prime_table(int n);
int refact_sum(int n);
bool is_prime(int n){ /* prime:return true */
    int i,i_sqrt = (int) sqrt(n);
    if(n<=2)
        return (n==2);
    else if(n%2==0)
        return false;
    for(i=3;i<=i_sqrt;i+=2){/*i<= i_sqrt*/
        if(n%i==0){
            return false;
        }
    }
    return true;
} 
int prime[10000],counter=0;
bool in_prime_table(int n){
    for (int c=0;c<counter;c++){
        if(prime[c]==n) return true;
        else if(prime[c]>n){
            return false;
        }
    }
    return false;
}
int refact_sum(int n){
    int complement;
    int max_product = 0;
    for(int c=0;prime[c]<=n/2;c++){
        complement = n-prime[c];
        if(in_prime_table(complement)){
            int product = complement*prime[c];
            max_product = product >= max_product ? product:max_product;
        }
    }
    printf("%d",max_product);
    return 0;
}
int main(){
    for (int i=0;i<10000;i++){
        if(is_prime(i)){
            prime[counter++]=i;
        }
    }
    int input_num;
    scanf("%u",&input_num);
    refact_sum((int)input_num);
    return 0;
}

