#include<iostream>
using namespace std;

int main(){
    int num ,j,k, arr[100] = {76,7,43,61,32,19,87,54,34,15} ;
    cout<< "Enter position to insert element : " ;
    cin>> k ;
    cout<< "Enter number to be inserted : " ;
    cin>> num ;

    j = 9 ;
    while(j >= k){
        arr[j+1] = arr[j] ;
        j-- ;
    }

    arr[k] = num ;
    for(int i=0;i<11;i++)
        cout<< arr[i] << " ";
    cout<< endl;

    return 0;
}
