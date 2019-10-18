#include<bits/stdc++.h>
using namespace std ;
#define N 10

class Queue{
    int Front,Rear,queueArr[N+1];
public:
    Queue(){ Front=Rear=0; }
    void INSERT(int item){
        if((Front==1&&Rear==N) || (Front==Rear+1)){
            cout<< "Overflow" << endl;
        }
        if(Front==0){
            Front = 1 ;
            Rear = 1 ;
        }
        else if(Rear == N)
            Rear = 1 ;
        else Rear = Rear + 1 ;

        queueArr[Rear] = item ;
    }

    void DELETE(){
        if(Front == 0){
            cout<< "Underflow" << endl;
            return ;
        }
        int item = queueArr[Front] ;
        if(Front == Rear)
            Front = Rear = 0 ;
        else if(Front == N)
            Front = 1 ;
        else Front = Front + 1 ;

        cout<< item << " has been deleted ..." << endl;
    }
};

int main(){



    return 0 ;
}
