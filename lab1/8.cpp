#include<iostream>
using namespace std ;

int main(){
    int n,arr[100] = {12,19,25,33,50,59,62,68,77,80} ;
    cout<< "Enter number to be searched : ";
    cin>> n;

    int lo=0,hi=9;
    while(lo <= hi){
        int mid = (lo+hi)/2 ;
        if(arr[mid] == n){
            cout<< "Number is at position : " << mid << endl;
            return 0 ;
        }
        else if(arr[mid] > n)
            hi = mid-1 ;
        else
            lo = mid+1 ;
    }

    cout<< "Number not found ... " << endl;

    return 0;
}
