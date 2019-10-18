#include<bits/stdc++.h>
using namespace std ;
bool matrix[1000][1000] ;
bool pathMatrix[1000][1000] ;

void wharshal(int n){
    for(int i=0; i<=n; i++)
        for(int j=0; j<=n; j++)
            if(matrix[i][j] == 1) pathMatrix[i][j] = 1 ;

    for(int k=0; k<=n; k++){
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                pathMatrix[i][j] = pathMatrix[i][j] || pathMatrix[i][k] && pathMatrix[k][j] ;
            }
        }
    }
}

int main(){

    wharshal(10) ;

    return 0 ;
}
