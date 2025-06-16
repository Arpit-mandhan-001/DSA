#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int k)
{
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++; //{0,1}
    int cnt = 0;

    for (int i = 0; i < a.size(); i++)
    {

        xr = xr ^ a[i];

        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }

    return cnt;
}
int soLve(vector<int> &A, int k)
{
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        int xorr = 0;
        for (int j = i; j < A.size(); j++)
        {
            xorr = xorr ^ A[j];
            if (xorr == k)
                cnt++;
        }
    }
    return cnt;
}

int main()
{

    vector<int> a = {4, 2, 2, 6, 4};
    vector<int> A = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = solve(a, k);    // optimal
    int answer = soLve(A, k); // better

    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}