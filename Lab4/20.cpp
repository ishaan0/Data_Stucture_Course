#include<bits/stdc++.h>
using namespace std ;

int cntDigit(int n){
    if(n < 0) return 0 ;
    if(n < 1) return 1 ;
    double digit = 0 ;
    for(int i=2; i<=n; i++)
        digit += log10(i) ;
    return floor(digit)+1 ;
}

int main(){

    cout<< cntDigit(15) << endl;

    return 0 ;
}
