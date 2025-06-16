#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int m, vector<int>& arr2, int n) {
          
        for(int i=0; i<n; i++){
            arr[m+i] = arr2[i];
        }
        sort(arr.begin(), arr.end());
    
  }
    
int main(){

    vector<int> arr={1,4,8,10};
    int m= arr.size();
    vector<int> arr2={2,3,9};
    int n=arr2.size();
   merge(arr,m,arr2,n);
for (int i = 0; i < m+n; i++)
{
 cout<<arr[i]<<" ";
}

}