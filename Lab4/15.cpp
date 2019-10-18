#include<bits/stdc++.h>
using namespace std ;
int adjList[1000][1000] ;

void addEdge(int node1, int node2){
    int i=0 ;
    for(; i<1000; i++)
        if(adjList[node1][i] == 0)
         break ;
    adjList[node1][i] = node2 ;
}

int main(){

    addEdge(2,3) ;
    addEdge(4,5) ;
    addEdge(4,2) ;
    addEdge(3,5) ;

    for(int i=1; i<=5; i++){
        for(int j=0; adjList[i][j] != 0; j++)
            cout<< adjList[i][j] << " " ;
            cout<< endl;
    }

    return 0 ;
}
