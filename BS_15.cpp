#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &matrix, int k){
    int n=matrix.size();
int low=0,high=n-1;
while(low<=high){
    int mid=(low+high)/2;

    if(matrix[mid]==k) return true;
    else if(matrix[mid]<k) low=mid+1;
    else
    high=mid-1;
}
return false;
}

int binarysearch(vector<vector<int>> &matrix, int n, int m, int k){
    for(int i=0; i<=n-1; i++){
         
         if(matrix[i][0]<=k && k<=matrix[i][m-1]){
            return binarySearch(matrix[i],k);
         }
        }
        return false;
    }


int main()
{
    vector<vector<int>> matrix ={{1, 2, 3}, { 6, 7, 8}, { 10, 11, 12}};
    int n = 3, m = 3;
    int k=8;
    cout<< binarysearch(matrix, n, m, k) << '\n';
}
