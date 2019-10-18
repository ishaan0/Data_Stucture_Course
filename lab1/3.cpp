#include<iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<< "Enter number of students : " ;
    cin>> n ;

    cout<< "Enter marks of "<< n << " Students : ";
    for(int i=0;i<n;i++)
        cin>> arr[i] ;

    int cnt = 0;
    for(int i=0;i<n;i++)
        if(arr[i] >= 40) cnt++ ;

    cout<< "Total " << cnt << " student passed ..." << endl;

    return 0;
}
