#include<bits/stdc++.h>
using namespace std;

int fiboRecursive(int n){
    if(n<2)
        return n ;
    return fiboRecursive(n-1)+fiboRecursive(n-2) ;
}

int fiboNonRecursive(int n){
    int ff = 1,ss = 1 ;
    if(n == 1)
        return ff ;
    if(n == 2)
        return ss ;
    for(int i=3; i<=n; i++){
        int temp = ff+ss ;
        ff = ss ;
        ss = temp ;
    }
    return ss ;
}

int main(){

    cout<< fiboRecursive(2) << endl;
    cout<< fiboNonRecursive(3) << endl;
    return 0;
}

