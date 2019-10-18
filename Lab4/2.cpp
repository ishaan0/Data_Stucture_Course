#include<bits/stdc++.h>
using namespace std ;


int main(){
    int arr[] = {5,2,8,1,9,7} ;
    int n = 6 ;

    for(int i=0; i<n; i++){
        int loc = i ;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[loc])
                loc = j ;
        }
        swap(arr[i], arr[loc]) ;
    }

    for(int i=0; i<=5; i++)
        cout<< arr[i] << " " ;

    return 0 ;
}

