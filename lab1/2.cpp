#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c,d;
    cin>> a >> b >> c ;

    d = (b*b)-(4*a*c) ;

    if(d > 0){
        double x1,x2;
        x1 = (-b + sqrt(d))/(2*a) ;
        x2 = (-b - sqrt(d))/(2*a) ;
        cout<< "X1 : " << x1 << " X2 : " << x2 << endl;
    }
    else if(d == 0){
        double x ;
        x = (-b)/(2*a) ;
        cout<< "X : " << x << endl;
    }
    else
        cout<< "NO real solution ... " << endl;

    return 0;
}
