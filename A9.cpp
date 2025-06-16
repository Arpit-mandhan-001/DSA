// BRUTE FORCE APPROACH 

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
  set<int> s;
  vector<int> Union;
  for (int i = 0; i < n; i++)
  {
    s.insert(arr1[i]);
  }
  for (int i = 0; i < m; i++)
  {
    s.insert(arr2[i]);
  }
  
    for (auto & it: s)
    Union.push_back(it);
  return Union;
}



//OPTIMAL SOLUTION


  vector<int> sortedArray(int a[],int b[],int n, int m) {

    int i = 0;
    int j = 0;

    vector<int> unionArray;

    while (i < n && j < m) {
      // step 1
      if (a[i] <= b[j]) {
        if (unionArray.size() == 0 || unionArray.back() != a[i]) 
          unionArray.push_back(a[i]);
        i++;
      }
      // step 2
      else {
        if (unionArray.size() == 0 || unionArray.back() != b[j]) 
          unionArray.push_back(b[j]);
        j++;
      }
    }
    // if any element left in arr1
    while (i < n) {
      if (unionArray.back() != a[i]) 
        unionArray.push_back(a[i]);
        i++;
      
    }
    //if any element left in arr2
    while (j < m) {
      if (unionArray.back() != b[j]) 
        unionArray.push_back(b[j]);
        j++;
      
    }
    return unionArray;
  }

int main(){

  int n = 10, m = 7;
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int b[] = {2, 3, 4, 4, 5, 11, 12}; 

vector<int> unionArray=sortedArray(a,b,n,m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: unionArray)
    cout << val << " ";

  int arr1[] = {1, 2, 3, 4, 5, 6,8};
  int arr2[] = {1, 2, 4, 5, 6, 7};
  int n = 7;
  int m = 6;

  vector<int> Union = findUnion(arr1, arr2, n, m);

  cout << "Union of arr1 and arr2 is  " << endl;

  for (auto &val : Union)
    cout << val << " ";
    
    return 0;
}


