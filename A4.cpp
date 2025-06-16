#include <bits/stdc++.h>
using namespace std;
//REMOVE DUPLICATE FROM ARRAY

int removeDuplicates(vector<int> &arr, int n)
{

    int i = 0;
    for (int j = 1; j < n; j++)
    {

        if (arr[j] != arr[i])
        {

            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}
int removeduplicate(vector<int> &arr,int n){
  
    set<int> st;

    for (int i = 0; i < n; i++)
    {
     st.insert(arr[i]);
    }
    int  index=0;
    for(auto it: st ){
        arr[index]=it;
        index++;
    }
   return st;
}

int main()
{

    vector<int> arr = {1,2,3,3,3,3,3};
    int n = arr.size();
    removeduplicate(arr,n);
    

    //cout << removeDuplicates(arr, n) << endl;
}