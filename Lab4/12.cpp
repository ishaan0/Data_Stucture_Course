#include<bits/stdc++.h>
using namespace std ;
int matrix[1000][1000] ;

void addEdge(int node1, int node2){
    matrix[node1][node2] = 1 ;
    matrix[node2][node1] = 1 ;
}


int main(){

    addEdge(2,3) ;
    addEdge(4,5) ;
    addEdge(4,2) ;
    addEdge(3,5) ;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++)
            cout<< matrix[i][j] << " " ;
            cout<< endl;
    }

    return 0 ;
}
