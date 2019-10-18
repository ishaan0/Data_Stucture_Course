#include<bits/stdc++.h>
using namespace std ;

class node{
public:
    int data,priority ;
    node* next ;
};

class priorityQueue{
    node* Front ;
public:
    priorityQueue(){ Front = NULL ; }
    void INSERT(int data, int priority){
        node* newNode = new node ;
        newNode->data = data ;
        newNode->priority = priority ;
        newNode->next = NULL ;

        if(Front == NULL || priority < Front->priority){
            newNode->next = Front ;
            Front = newNode ;
        }
        else{
            node* currentNode = Front ;
            node* prevNode = Front ;
            while(currentNode != NULL && currentNode->priority < priority){
                prevNode = currentNode ;
                currentNode->next = currentNode ;
            }
            prevNode->next = newNode ;
            newNode->next = currentNode ;
        }
    }

    void DELETE(){
        if(Front == NULL){
            cout<< "Underflow .. " << endl;
            return ;
        }
        node* currentNode = Front ;
        Front = Front->next ;
        cout<< "Deleted item is : " << currentNode->data << endl;
        delete currentNode ;
    }
};

int main(){


    return 0 ;
}
