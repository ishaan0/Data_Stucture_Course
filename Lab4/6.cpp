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
    void inOrder(node* currentNode) ;
    void postOrder(node* currentNode) ;
    void preOrder(node* currentNode) ;

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


void bst:: preOrder(node* currentNode){
    cout<< currentNode->data << " " ;
    if(currentNode->left != NULL)
        preOrder(currentNode->left) ;
    if(currentNode->right != NULL)
        preOrder(currentNode->right) ;
}


void bst:: inOrder(node* currentNode){
    if(currentNode->left != NULL)
        inOrder(currentNode->left) ;
    cout<< currentNode->data << " " ;
    if(currentNode->right != NULL)
        inOrder(currentNode->right) ;
}


void bst:: postOrder(node* currentNode){
    if(currentNode->left != NULL)
        postOrder(currentNode->left) ;
    if(currentNode->right != NULL)
        postOrder(currentNode->right) ;
    cout<< currentNode->data << " " ;
}



int main(){
    int arr[] = {4,6,7,3,31,65,44} ;
    bst ob ;
    ob.createBst(arr,7) ;
    ob.inOrder(ob.root) ;

    return 0 ;
}
