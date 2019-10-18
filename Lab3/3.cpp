#include<bits/stdc++.h>
using namespace std ;

void tower(int n, char BEG, char AUX, char END){
    if(n == 1){
        cout<< "Move 1 from "<< BEG << " to " << END << endl;
        return ;
    }

    tower(n-1,BEG,END,AUX) ;
    cout<< "Move "<< n <<" from "<< BEG << " to " << END << endl;
    tower(n-1,AUX,BEG,END) ;

}

int main(){
    tower(4,'B','A','E') ;

    return 0 ;
}
