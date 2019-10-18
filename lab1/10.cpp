#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream fout;
    fout.open("RAND.txt") ;

    for(int i=1;i<=100;i++)
        fout<< (rand()%100)+1 << endl;
    fout.close();

    ifstream fin;
    fin.open("RAND.txt") ;

    while(!fin.eof()){
        int num ;
        fin>> num ;
        cout<< num << endl;
    }

    fin.close() ;

    return 0;
}
