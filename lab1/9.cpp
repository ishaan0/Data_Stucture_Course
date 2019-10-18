#include<iostream>
#include<cmath>
using namespace std ;

bool primes[110];
void seive(){
    int i,j,n=100,lim = sqrt(n)+1 ;
    primes[0] = 1 ;
    primes[1] = 1 ;
    for(i=4;i<=n;i+=2)
        primes[i] = 1;
    for(i=3;i<=n;i+=2){
        if(!primes[i] && i<=lim){
            for(j=i*i;j<=n;j+=i*2)
                primes[j] = 1 ;
        }
    }
}


int main(){
    seive() ;
    int n;
    cout<< "Enter a number : ";
    cin>> n ;

    if(!primes[n]) cout<< "The number is a Prime.." << endl;
    else cout<< "The number is not a prime..." << endl;

    return 0 ;
}
