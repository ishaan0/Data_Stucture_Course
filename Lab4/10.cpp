#include <bits/stdc++.h>
using namespace std;

void maxHeap(int *a, int m, int n) {
   int j, t;
   t = a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
}
void build_maxheap(int *a,int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      maxHeap(a,k,n);
   }
}

void deleteRoot(int *arr, int& n)
{
    int lastElement = arr[n];
    arr[1] = lastElement;
    n = n - 1;
    build_maxheap(arr, n);
}

int main() {
   int a[] = {0,3,6,4,8,7,6,8} ;
   int n = 7 ;

   build_maxheap(a,n);
   deleteRoot(a,n) ;
   cout<<"Max Heap" << endl;
   for (int i = 1; i <= n; i++)
      cout<<a[i]<<endl;

}

