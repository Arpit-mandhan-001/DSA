#include <bits/stdc++.h>
using namespace std;

int stock_sell(vector<int> arr)
{
    int maxi;
    int profit = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int cost = (arr[i] - maxi);
        profit = max(cost, maxi);
        maxi = min(maxi, arr[i]);
    }
    return profit;
}

int main()
{
    vector<int> arr = {2, 1, 3, 5, 7, 5, 9, 12};
    int ans = stock_sell(arr);
    cout << "the maximum profit is " << ans << endl;
}
