#include<bits/stdc++.h>
#include<conio.h>
using namespace std ;


class Array{
    int arr[500], len=0;
public:
    Array(){
        int n ;
        cout<< "Enter number of array element : " ;
        cin>> n ;
        cout<< "Enter array element : "  ;
        for(int i=0;i<n;i++)
            cin>> arr[i] ;
        len = n;

        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
            if(arr[j] < arr[i])
                swap(arr[j],arr[i]) ;
    }
    void design() ;
    void INSERT(int data) ;
    void DELETE(int data) ;
    int binarySearch(int data) ;
    void display() ;
};

// Design Option
void Array:: design(){
    vector<string> str = {"INSERT","DELETE","SEARCH","DISPLAY","EXIT"} ;
    cout<< endl << '\t';
    cout<< setfill('-')<< setw(40)<<'\n';

    for(int i=1,j=0; i<=11; i++){
        cout<< '\t'<<'|' ;
        if(i&1)
            cout<<setfill(' ')<< setw(38) << '|' <<endl;
        else{
            cout<<'\t'<<str[j];
            for(int k=1; k<=(9-str[j].size()); k++) cout<< " " ;
            cout<< setfill('*')<<setw(12)<<'\t'<<j+1<<"     |" << endl ;
            j++ ;
        }
    }
    cout<< '\t' <<setfill('-')<< setw(40)<<'\n';
}

// Insert New Element
void Array:: INSERT(int data){
    int pos = -1 ;
    for(int i=0; i<len; i++)
        if(arr[i] >= data) pos = i ;

    if(pos != -1){
        for(int i=len-1; i>=pos; i--)
            arr[i+1] = arr[i] ;
    }
    else pos = len ;
    arr[pos] = data ;
    len++ ;

    cout<< "Message : "<< data << " inserted at position " << pos+1 << endl ;
}

// Delete Element From array
void Array:: DELETE(int data){
    int pos = binarySearch(data) ;

    if(pos != -1){
        for(int i=pos+1; i<len; i++)
            arr[i-1] = arr[i] ;
        len-- ;
        cout<< "Message : "<< data << " deleted from position " << pos+1 << endl ;
    }
    else cout<< "Message : "<< data << " not found !!!" << endl ;
}

// binary Search
int Array:: binarySearch(int data){
    int pos = -1 ;
    int lo=0,hi=len-1,mid ;

    while(lo <= hi){
        mid = lo+(hi-lo)/2 ;
        if(mid == data) break ;
        else if(mid < data)
            lo = mid + 1 ;
        else hi = mid - 1 ;
    }

    for(int i=mid; i>=0; i--)
        if(arr[i] == data) pos = i ;
        else break ;

    return pos ;
}

// Display Element from array
void Array:: display(){
    if(len == 0){
        cout<< "Message : Sorry !! the array is empty !!" << endl;
        return ;
    }
    cout<< "Array elements : " ;
    for(int i=0; i<len; i++)
        cout<< arr[i] << " " ;
    cout<< endl;
}

int main(){
    Array arr ;

    while(true){
        system("cls") ;
        arr.design() ;
        int n, data;
        cout<< endl << "Select a option: " ;
        cin>> n ;

        if(n == 1){
            cout<< endl << "Enter number to be inserted: " ;
            cin>> data ;
            arr.INSERT(data) ;
        }
        else if(n == 2){
            cout<< endl << "Enter number to be deleted: " ;
            cin>> data ;
            arr.DELETE(data) ;
        }
        else if(n == 3){
            cout<< endl << "Enter number to be searched: " ;
            cin>> data ;
            int pos = arr.binarySearch(data) ;
            if(pos != -1)
                cout<< "Message : "<< data << " is at position " << pos+1 << endl;
            else cout<< endl << "Message : " << data << " not found !!" << endl;
        }
        else if(n == 4)
            arr.display() ;
        else if(n == 5)
            break ;
        else cout<< endl << "Message : Error !!! Please select proper option.." << endl;
        cout<< endl << "Please press enter..." << endl;
        getch() ;

    }

    return 0 ;
}
