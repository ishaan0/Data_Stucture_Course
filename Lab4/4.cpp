#include<bits/stdc++.h>
using namespace std ;

int mergedArr[100] , k;

void mergeArr(int *firstArr,int sz1,int *secondArr,int sz2){

    int i=0,j=0;
    k = 0 ;
    while(i<sz1 && j<sz2){
        if(firstArr[i] < secondArr[j]){
            mergedArr[k++] = firstArr[i++] ;
        }
        else{
            mergedArr[k++] = secondArr[j++] ;
        }
    }

    while(i < sz1)
        mergedArr[k++] = firstArr[i++] ;
    while(j < sz2)
        mergedArr[k++] = secondArr[j++] ;

}

int main(){

    int firstArr[] = {1,3,5,7} ;
    int secondArr[] = {2,4,6,8} ;
    int sz1 = 4 , sz2 = 4 ;

    mergeArr(firstArr,sz1,secondArr,sz2) ;
    for(int i=0; i<k; i++)
        cout<< mergedArr[i] << ' ';

    return 0 ;
}
