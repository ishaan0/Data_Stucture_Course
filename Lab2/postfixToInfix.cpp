#include<bits/stdc++.h>
using namespace std ;

string getInfix(string str){
    stack<string> stck ;

    for(int i=0;i<str.size();i++){
        if(isalpha(str[i])){
            string s = "";
            s += str[i] ;
            stck.push(s) ;
        }
        else{
            string b = stck.top() ;
            stck.pop() ;
            string a = stck.top() ;
            stck.pop() ;
            string temp  = "(" + a + str[i] + b + ")" ;
            stck.push(temp) ;
        }
    }
    return stck.top() ;
}

int main(){

    string str ;
    cin>> str ;

    cout<< getInfix(str) << endl;

    return 0 ;
}
