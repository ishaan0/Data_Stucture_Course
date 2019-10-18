#include<bits/stdc++.h>
using namespace std ;
vector<vector<int> > adj ;
vector<bool> visited(1000) ;

void dfs(int n){
    visited[n] = true ;
    cout<< n << " " ;
    for(int i=0; i<adj[n].size(); i++){
        int adjNode = adj[n][i] ;
        if(!visited[node][adjNode])
            dfs(adjNode) ;
    }
}

int main(){

    dfs(10) ;

    return 0 ;

}
