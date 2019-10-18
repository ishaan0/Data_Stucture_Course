/// https://paste.ubuntu.com/p/X52mXpSgVm/

#include<bits/stdc++.h>
using namespace std;

int factRecursive(int n){
    if(n<2)
        return 1 ;
    return n*factRecursive(n-1) ;
}

int factNonRecursive(int n){
    int ans = 1 ;
    for(int i=2; i<=n; i++)
        ans *= i ;
    return ans ;
}


int main(){

    cout<< factNonRecursive(5) << endl;
    cout<< factRecursive(6) << endl;

    return 0;
}

