#include<bits/stdc++.h>
using namespace std ;


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

    cout<< fiboNonRecursive(3) << endl;
    return 0;
}
