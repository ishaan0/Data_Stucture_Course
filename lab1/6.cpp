#include<iostream>
using namespace std;

int main(){
    int arr[100],n;
    cout<< "Enter array limit : " ;
    cin>> n;
    cout<< "Enter array elements : ";
    for(int i=0;i<n;i++)
        cin>> arr[i] ;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }

    cout<< "Sorted elements : " ;
    for(int i=0;i<n;i++)
        cout<< arr[i] << " ";
    cout<< endl;

    return 0 ;
}
