#include<bits/stdc++.h>
using namespace std;

int arr[500];

int multiply(int num, int sz);
void factorial(int n){
    int sz = 1;
    arr[0] = 1 ;

    for(int i=2; i<=n; i++)
        sz = multiply(i,sz) ;

    cout<< "Factorial of " << n << " is : ";
    for(int i=sz-1; i>=0; i--)
        cout<< arr[i] ;
    cout<< endl;
}

int multiply(int num, int sz){
    int carry = 0 ;
    for(int i=0; i<sz; i++){
        int temp = (arr[i]*num) + carry ;
        arr[i] = temp%10 ;
        carry = temp/10 ;
    }

    while(carry!=0){
        arr[sz] = carry%10 ;
        carry /= 10 ;
        sz++ ;
    }
    return sz ;
}

int main(){

    factorial(100) ;

    return 0;
}

