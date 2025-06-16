#include <bits/stdc++.h>
using namespace std;

// TO CHECK IF GIVEN ARRAY IS SORTED OR NOT
bool check_sort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i -1])
        {     
            return false;
        }
    }
  return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 6};

    cout << check_sort(arr);
}
