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

    void searchLinkedList(int data, int sz){
        int pos = 0 ;
        node* currenNode = Head ;
        while(currenNode != NULL){
            if(currenNode->data == data)
                break;
            currenNode = currenNode->next ;
            pos++ ;
        }
        if(pos >= 1 && pos < sz){
            cout<< data << " is at position -> " << pos+1 << endl;
        }
        else cout<< data << " not found" << endl;
    }

};

int main(){
    int arr[] = {2,5,6,9,8,7,4} ;

    linkedList listArray ;
    listArray.createLinkedList(arr,7) ;
    listArray.searchLinkedList(5,7);

    return 0 ;
}

