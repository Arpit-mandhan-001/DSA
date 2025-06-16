// MAJORITY ELEMENT(>N/2)

#include <bits/stdc++.h>
using namespace std;
// BRUTE FORCE
int maj_element(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                cnt++;
        }
        if (cnt > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}
// BETTER SOLUTION
int majorityele(vector<int> arr)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {

        if (it.second > (arr.size() / 2))
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    int n = 10;
    int ar[] = {1, 2, 3, 3, 3, 3, 3, 5, 9, 8};
    vector<int> arr = {2, 2, 2, 2, 24, 2, 6, 2, 6, 8};
      int answer=majorityele(arr);
      cout<<answer<<"  ";
    int ans = maj_element(ar, n);
    // cout << ans << "  ";
}