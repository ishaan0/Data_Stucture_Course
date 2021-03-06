#include<bits/stdc++.h>
using namespace std ;

class node{
public:
    int data;
    node* next ;
    node* prev ;
};

class linkedList{
    node* Head ;
public:
    linkedList(){ Head = NULL ; }
    void createLinkedList(int arr[], int sz){
        if(sz >= 1){
            node* newNode = new node ;
            newNode->data = arr[0] ;
            Head = newNode ;
        }
        node* prevNode = Head ;
        for(int i=1; i<sz; i++){
            node* newNode = new node ;
            newNode->data = arr[i] ;
            newNode->prev = prevNode ;

            prevNode->next = newNode ;
            prevNode = newNode ;
        }
        if(prevNode != NULL){
            prevNode->next = NULL ;
            Head->prev = NULL ;
        }

    }
    void display(){
        node* currentNode = Head ;
        while(currentNode != NULL && currentNode->next != NULL){
            currentNode = currentNode->next ;
        }
        cout<< "display -> " ;
        while(currentNode != NULL){
            cout<< currentNode->data << " " ;
            currentNode = currentNode->prev ;
        }
        cout<< endl;
    }


};

int main(){
    int arr[] = {2,5,6,9,8,7,4} ;

    linkedList listArray ;
    listArray.createLinkedList(arr,7) ;
    listArray.display() ;

    return 0 ;
}





