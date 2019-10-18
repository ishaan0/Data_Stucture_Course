#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n,m;
    cout<< "Enter number of row: " ;
    cin>> n ;
    cout<< "Enter number of column: ";
    cin>> m;

    int matrix[n][m] , transpose[m][n] ;

    cout<< "Enter matrix value : " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>> matrix[i][j] ;

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[j][i] = matrix[i][j] ;
        }
    }

    cout<< "Transpose matrix is : " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<< transpose[i][j] << " ";
       cout<< endl;
    }

    return 0 ;
}
