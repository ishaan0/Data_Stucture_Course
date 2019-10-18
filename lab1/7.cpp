#include<iostream>
using namespace std;

int main(){
    int n,pos=-1,arr[100] = {79,74,61,6,57,49,84,13,1,49} ;
    cout<< "Enter number to be searched : ";
    cin>> n;

    for(int i=0;i<10;i++)
        if(arr[i] == n) pos = i+1 ;

    if(pos != -1)
        cout<< "Number is at position : " << pos << endl;
    else
        cout<< "Number not found..." << endl;

    return 0 ;
}
