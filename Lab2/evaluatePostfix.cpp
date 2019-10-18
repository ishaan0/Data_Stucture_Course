#include<bits/stdc++.h>
using namespace std ;

int calculate(int a, int b , char ch){
    int value ;
    switch(ch){
        case '*':
            value = a * b;
            break;
        case '/':
            value = a / b;
            break ;
        case '+':
            value = a + b;
            break;
        case '-':
            value = a - b;
            break;
    }
    return value ;
}


int evaluatePostfix(string str){
    stack<int> stck ;
    string ans = "" ;

    for(int i=0 ; i<str.size() ; i++){
        if(isdigit(str[i]))
            stck.push(str[i]-'0') ;

        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
            int b = stck.top() ;
            stck.pop() ;
            int a = stck.top() ;
            stck.pop() ;
            int value = calculate(a,b,str[i]) ;
            stck.push(value) ;
        }
    }
    return stck.top() ;
}


int main(){
    string str ;
    cin>> str ;

    cout<< evaluatePostfix(str) << endl;

    return 0 ;
}
