#include<bits/stdc++.h>
using namespace std ;

void mergeArr(int *arr,int low,int high,int mid) ;
void mergeSort(int *arr, int low, int high){

    if(low < high){
        int mid = (low+high)/2 ;
        mergeSort(arr,low,mid) ;
        mergeSort(arr,mid+1,high) ;
        mergeArr(arr,low,high,mid) ;
    }
}

void mergeArr(int *arr,int low,int high,int mid){

    int i,j,k,c[50] ;
    i = k = low ;
    j = mid+1 ;

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            c[k] = arr[i] ;
            k++ , i++ ;
        }
        else{
            c[k] = arr[j] ;
            k++ , j++ ;
        }
    }

    while(i <= mid){
        c[k] = arr[i] ;
        k++ , i++ ;
    }

    while(j <= high){
        c[k] = arr[j] ;
        k++ , j++ ;
    }

    for(i = low; i<k ; i++)
        arr[i] = c[i] ;
}

int main(){

    int arr[] = {5,2,8,1,9,7} ;
    int n = 6 ;

    mergeSort(arr,0,n-1) ;
    for(int i=0; i<n; i++)
        cout<< arr[i] << ' ';

    return 0 ;
}

