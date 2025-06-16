#include <bits/stdc++.h>
using namespace std;

// THIS ONE IS OPTIMAL APPROACH OF THIS QUESTION

int largest_element1(vector<int> arr1, int n)
{
    int max = arr1[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr1[i])
        {
            max = arr1[i];
        }
    }

    return max;
}

// THIS ONE IS BRUTE FORCE APPROACH

int largest_element(vector<int> &arr1)
{

    sort(arr1.begin(), arr1.end());

    return arr1[arr1.size() - 1];
}

int main()
{

    vector<int> arr1 = {3, 5, 12, 2, 22, 2};
    int n = arr1.size();

    cout << largest_element(arr1) << endl;
    cout << largest_element1(arr1, n) << endl;
  
}


void solve(){
    cout<<'hello deepak how do you do';
}