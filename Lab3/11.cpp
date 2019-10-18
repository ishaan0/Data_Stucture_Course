#include<bits/stdc++.h>
using namespace std ;

class node{
public:
    int data;
    node* next ;
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

            prevNode->next = newNode ;
            prevNode = newNode ;
        }

        if(prevNode != NULL && prevNode != Head)
            prevNode->next = Head ;
        else if(prevNode != NULL)
            prevNode->next = NULL ;
    }

    void displayLinkedList(){
        if(Head == NULL ){
            cout<< "Data not found" << endl;
            return ;
        }

        node* currentNode = Head->next ;
        cout<< "Display -> " << Head->data << " ";
        while(currentNode != NULL && currentNode != Head){
            cout<< currentNode->data << " ";
            currentNode = currentNode->next ;
        }
        cout<< endl;

    }
};

int main(){
    int arr[] = {2,5,6,9,8,7,4} ;

    linkedList listArray ;
    listArray.createLinkedList(arr,7) ;
    listArray.displayLinkedList() ;

    return 0 ;
}

