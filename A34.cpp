#include<bits/stdc++.h>
using namespace std;

int maxelement(vector<vector<int>> &matrix, int n, int mid){
    int max=INT_MIN;
    int index=-1;
    for (int i = 0; i < n; i++)
    {
      if(matrix[i][mid]>max){
        max=matrix[i][mid];
        index=i;
      }

    }
    return index;
    
}

vector<int>  findpeak(vector<vector<int>> &matrix){
    int n= matrix.size();
    int m= matrix[0].size();

    int low=0, high=m-1;

    while(low<=high){
        int mid= (low+high)/2;
        int maxrow=maxelement(matrix, n, mid);

        int left= mid-1>=0 ? matrix[maxrow][mid-1] :-1;
        int right= mid+1<m ? matrix[maxrow][mid+1] :-1;

        if(matrix[maxrow][mid]>left && matrix[maxrow][mid]> right ) return {maxrow, mid};
        else if(matrix[maxrow][mid]<left) high=mid-1;
        else low=mid+1;

    }
    return {-1,-1};
}

int main() {

    vector<vector<int>> matrix = {
        {10, 2, 15},
        {21, 3, 14},
        {7, 1, 3}
    };

    vector<int> ans =findpeak(matrix);
    cout << "The peak element is at position: (" << ans[0] << ", " << ans[1] << ")" << endl;
    return 0;
}