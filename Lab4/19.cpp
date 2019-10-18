#include<bits/stdc++.h>
using namespace std ;

class hashTable{
public:
    int sz ;
    list<int>* table ;
    hashTable(int sz){
        this->sz = sz ;
        table = new list<int>[sz] ;
    }

    void insertItem(int key){
        int idx = hashFunction(key) ;
        table[idx].push_back(key) ;
    }

    void deleteItem(int key){
        int idx = hashFunction(key) ;
        list<int>:: iterator it ;
        for(it=table[idx].begin(); it!=table[idx].end(); it++){
            if(*it == key) break ;
        }
        if(it!=table[idx].end())
            table[idx].erase(i) ;
    }

    int hashFunction(int key){
        return (key%sz) ;
    }

};

int main(){
    hashTable ob(10) ;
    int arr[] = {3,45,76,86,48,23} ;
    int n = 6 ;
    for(int i=0; i<n; i++)
        ob.insertItem(arr[i]) ;
    ob.deleteItem(6) ;

    return 0 ;
}
