#include<bits/stdc++.h>
using namespace std ;


void quick_sort(int a[], int low, int high){

    int k;
    int i, j, flag = 1;
    if (low < high){

        k = a[low];
        i = low + 1;
        j = high;

        while (flag) {
            while ((a[i] <= k) && (i < j))
                i++;
            while (a[j] > k)
                j--;
            if (i < j)
                swap(a[i], a[j]);
            else
                flag = 0;
        }

        swap(a[low], a[j]);
        quick_sort(a, low, j - 1);
        quick_sort(a, j + 1, high);
    }
}

int main(){
    int arr[] = {5,2,8,1,9,7} ;
    int n = 6 ;

    quick_sort(arr,0,n-1) ;
    for(int i=0; i<n; i++)
        cout<< arr[i] << ' ';

    return 0 ;
}
