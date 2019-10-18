#include<iostream>
using namespace std;

int main(){
    int arr[] = {15,64,67,46,43,25,16,30,8,77} ;
    int mx = arr[0] ;

    for(int i=1;i<10;i++){
        if(arr[i] > mx)
            mx = arr[i] ;
    }

    cout<< mx << endl;

    return 0;
}
