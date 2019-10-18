#include<bits/stdc++.h>
using namespace std ;

#define inf INT_MIN

int main(){
    int A[] = {inf,5,2,8,1,9,7} ;
    int k = 2, n = 6, temp, ptr;

    while(k <= n){
        temp = A[k] ;
        ptr = k-1 ;
        while(temp < A[ptr]){
            A[ptr+1] = A[ptr] ;
            ptr = ptr-1 ;
        }
        A[ptr+1] = temp ;
        k++ ;
    }

    for(int i=1; i<=n; i++)
        cout<< A[i] << " ";

    return 0 ;
}
