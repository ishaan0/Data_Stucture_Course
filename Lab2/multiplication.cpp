#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n1,n2,m1,m2 ;
    cout<< "Enter number of row [First matrix]: " ;
    cin>> n1 ;
    cout<< "Enter number of column [First matrix]: ";
    cin>> m1;

    int matrix1[n1][m1] ;
    cout<< "Enter 1st matrix value : " << endl;
    for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
            cin>> matrix1[i][j] ;

    cout<< "Enter number of row [Second matrix]: " ;
    cin>> n2 ;
    cout<< "Enter number of column [Second matrix]: ";
    cin>> m2;

    int matrix2[n2][m2] ;
    cout<< "Enter 2nd matrix value : " << endl;
    for(int i=0;i<n2;i++)
        for(int j=0;j<m2;j++)
            cin>> matrix2[i][j] ;

    if(m1 != n2){
        cout<< "These matrix can't be multiplied !!" << endl;
        return 0 ;
    }

    int multiplied[n1][m2] ;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            int sum = 0 ;
            for(int k=0;k<n2;k++)
                sum += matrix1[i][k]*matrix2[k][j] ;
            multiplied[i][j] = sum ;
        }
    }

    cout<< "Multiplied matrix : " << endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++)
            cout<< multiplied[i][j] << " " ;
        cout<< endl;
    }

    return 0 ;
}
