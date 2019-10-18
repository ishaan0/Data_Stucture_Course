#include<bits/stdc++.h>
using namespace std ;

int MAX = 10;
int top = 0 ;

int STACK[MAX] ;
void PUSH(int data){
    if(top == MAX){
        cout<< "OVERFLOW !!" << endl;
        return ;
    }
    STACK[top] = data ;
    top++ ;
}

int POP(){
    it(top == 0){
        cout<< "UNDERFLOW !!" << endl;
        return ;
    }
    top-- ;
    int item = STACK[top] ;
    return item ;
}

int main(){


    return 0 ;
}
