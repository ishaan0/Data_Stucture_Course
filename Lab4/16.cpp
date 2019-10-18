#include<bits/stdc++.h>
using namespace std ;
vector<vector<int> > adj ;
vector<bool> visited(1000) ;

void BFS(int n){
    queue<int> q ;
    visited[n] = true ;
    q.push(n) ;

    while(!q.empty()){
        int node = q.front() ;
        cout<< node << " " ;
        q.pop() ;

        for(int i=0; i<adj[node].size(); i++){
            int adjNode = adj[node][i] ;
            if(!visited[adjNode]){
                visited[adjNode] = true ;
                q.push(adjNode) ;
            }
        }

    }
}


int main(){

    bfs(10) ;

    return 0 ;
}

