#include<bits/stdc++.h>
using namespace std ;


class node{
public:
    int data ;
    node* parent ;
    node* left ;
    node* right ;
};


class bst{
public:
    node* root ;
    bst(){root = NULL;}
    node* createNode(int data) ;
    void createBst(int arr[], int sz);
    void addLeftChild(node* parent,node* child);
    void addRightChild(node* parent,node* child);
    void insertNode(int data) ;
    void searchData(int data) ;
};

node* bst:: createNode(int data){
    node* newNode = new node ;
    newNode->data = data ;
    newNode->parent = NULL ;
    newNode->left = NULL ;
    newNode->right = NULL ;
}

void bst:: createBst(int arr[], int sz){
    for(int i=0; i<sz; i++)
        insertNode(arr[i]) ;
}

void bst:: addLeftChild(node* parent,node* child){
    parent->left = child ;

    if(child != NULL)
        child->parent = parent ;
}


void bst:: addRightChild(node* parent,node* child){
    parent->right = child ;

    if(child != NULL)
        child->parent = parent ;
}


void bst:: insertNode(int data){
    node* newNode = createNode(data) ;
    if(root == NULL){
        root = newNode ;
        return ;
    }

    node* currentNode = root ;
    node* parentNode = NULL ;

    while(currentNode != NULL){
        parentNode = currentNode ;

        if(newNode->data < currentNode->data)
            currentNode = currentNode->left ;
        else
            currentNode = currentNode->right ;
    }

    if(newNode->data < parentNode->data)
        addLeftChild(parentNode,newNode) ;
    else
        addRightChild(parentNode,newNode) ;
}


void bst:: searchData(int data){
    node* currentNode = root ;
    bool flag = false ;

    while(currentNode != NULL){
        if(currentNode->data == data){
            flag = true ;
            break ;
        }
        else if(data < currentNode->data)
            currentNode = currentNode->left ;
        else
            currentNode = currentNode->right ;
    }

    if(flag)
        cout<< data << " found." << endl;
    else cout<< "Data not found" << endl;
}

int main(){
    int arr[] = {4,6,7,3,31,65,44} ;
    bst ob ;
    ob.createBst(arr,7) ;
    ob.searchData(3) ;

    return 0 ;
}

