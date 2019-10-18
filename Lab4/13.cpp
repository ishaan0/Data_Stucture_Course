#include<bits/stdc++.h>
using namespace std ;
int matrix[1000][1000] ;
int pathMatrix[1000][1000] ;

void addEdge(int node1, int node2){
    matrix[node1][node2] = 1 ;
    matrix[node2][node1] = 1 ;
}

void createPathMatrix(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(matrix[i][j] == 1 || i == j){
                for(int k=0; k<=n; k++)
                    if(matrix[j][k] == 1)
                        pathMatrix[i][k] = 1 ;
            }
        }
    }
}


int main(){

    addEdge(2,3) ;
    addEdge(4,5) ;
    addEdge(4,2) ;
    addEdge(3,5) ;

    createPathMatrix(5) ;
    for(int i=2; i<=5; i++){
        for(int j=2; j<=5; j++)
        cout<< pathMatrix[i][j] << " " ;
        cout<< endl;
    }


    return 0 ;
}

