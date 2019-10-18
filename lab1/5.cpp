#include<iostream>
using namespace std;

int main(){
    int j,k, arr[100] = {76,7,43,61,32,19,87,54,34,15} ;
    cout<< "Enter position to deleted : " ;
    cin>> k ;

    for(j=k;j<9;j++)
        arr[j] = arr[j+1] ;

    for(int i=0;i<9;i++)
        cout<< arr[i] << " ";
    cout<< endl;


    return 0 ;
}
