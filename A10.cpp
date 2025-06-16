#include <bits/stdc++.h>
using namespace std;

//FIND THE INTERSECTION OF TWO SORTED ARRAYS

vector<int> findintersection(vector<int> &a, vector<int> &b, int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {

        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main()
{

    vector<int> a = {1, 2, 3, 4, 4, 5, 5, 6};
    vector<int> b = {1, 1, 2, 4, 4, 5, 5, 6};
    int n = a.size();
    int m = b.size();

    vector<int> ans = findintersection(a, b, n, m);

    for (auto &val : ans)
        cout << val << " ";

    cout << "hehehe" << endl;

    for (auto &it : ans)
    {
        cout << it << " ";
    }
}