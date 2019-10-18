#include<bits/stdc++.h>
using namespace std ;

int gcd(int a, int b){
    while(b!=0){
        int temp = b ;
        b = a%b ;
        a = temp ;
    }
    return a ;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b) ;
}

int main(){

    int n, arr[50], ans;
    cin>> n ;
    for(int i=0; i<n; i++)
        cin>> arr[i] ;

    ans = arr[0] ;
    for(int i=1; i<n; i++)
        ans = lcm(ans,arr[i]) ;
    cout<< ans << endl;

    return 0 ;
}
