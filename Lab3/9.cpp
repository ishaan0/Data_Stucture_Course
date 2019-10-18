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
        if(prevNode != NULL)
            prevNode->next = NULL ;
    }

    void insertLinkedList(int data,int pos){
        node* newNode = new node ;
        newNode->data = data ;

        int i = 1 ;
        node* currentNode = Head ;
        node* prevNode = Head ;
        while(currentNode != NULL && i<pos){
            prevNode = currentNode ;
            currentNode = currentNode->next ;
            i++ ;
        }

        if(i != pos || Head == NULL){
            cout<< "position is invalid" << endl;
            return ;
        }

        if(prevNode == Head){
            newNode->next = Head ;
            Head = newNode ;
            return ;
        }
        prevNode->next = newNode ;
        newNode->next = currentNode ;
    }

};

int main(){
    int arr[] = {2,5,6,9,8,7,4} ;

    linkedList listArray ;
    listArray.createLinkedList(arr,7) ;
    listArray.insertLinkedList(10,3);

    return 0 ;
}


