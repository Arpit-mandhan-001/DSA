#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate_array(vector<vector<int>> &matrix, int n, int m){
  vector < vector < int >> answer(n, vector < int > (n, 0));

  for(int i=0; i<n; i++){
    for (int j = 0; j < m; j++)
    {
      answer[j][n-1-i]= matrix[i][j];
    }
    
  }
  return answer;
}

vector<vector<int>> Rotatearray(vector<vector<int>> &matrix, int n){

       for (int i = 0; i < n; i++)
       {
       for (int j = i; j < n; j++)
       {
       swap(matrix[i][j], matrix[j][i]);
       }
       }
       
        for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
    return matrix;
}
int main(){

vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int n= matrix.size();
int m= matrix[0].size();


vector<vector<int>> ans= rotate_array(matrix,n,m);//BRUTE FORCE 
vector<vector<int>> answer=Rotatearray(matrix,n);// OTPIMAL APPROACH

   cout << "The Final matrix is: " << endl;
    for (const auto &row : answer)
    {
        for (const auto &ele : row)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

}
