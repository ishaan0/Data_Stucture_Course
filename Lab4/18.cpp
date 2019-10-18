#include<bits/stdc++.h>
using namespace std ;

class hashTable{
public:
    int sz ;
    vector<int> table ;
    hashTable(int sz){
        this->sz = sz ;
        table.resize(sz,-1) ;
    }

    void insertItem(int key){
        int cnt = 0 ;
        int idx = hashFunction(key) ;
        while(table[idx] != -1 && cnt < sz){
            idx = (idx+1)%sz ;
            cnt++ ;
        }
        if(cnt >= sz){
            cout<< "table is full " << endl;
            return ;
        }
        table[idx] = key ;
    }

    void deleteItem(int key){
        int idx = hashFunction(key) ;
        if(table[idx] != -1)
            table[idx] = -1 ;
        else cout<< "key is not inserted" << endl;
    }

    int hashFunction(int key){
        return (key%sz) ;
    }

};

int main(){
    hashTable ob(10);
    int arr[] = {3,45,76,86,48,23} ;
    int n = 6 ;
    for(int i=0; i<n; i++)
        ob.insertItem(arr[i]) ;
    ob.deleteItem(6) ;

    return 0 ;
}
