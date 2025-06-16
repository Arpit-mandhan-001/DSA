#include <bits/stdc++.h>
using namespace std;
vector<int> genarterow(int i)
{
    long long res = 1;
    vector<int> ansrow;
    ansrow.push_back(1);
    for (int col = 1; col < i; col++)
    {
        res = res * (i - col);
        res = res / (col);
        ansrow.push_back(res);
    }
    return ansrow;
}
vector<vector<int>> pascaltraingle(int n)
{
    vector<vector<int>> ans;

    for (int i = 1; i <= n; i++)
    {
        ans.push_back(genarterow(i));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> ans = pascaltraingle(n);
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}