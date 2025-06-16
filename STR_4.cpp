#include <bits/stdc++.h>
using namespace std;

string longestprefix(vector<string> &s)
{
    sort(s.begin(),s.end());
    if (s.empty())
        return "";
    int n = s.size();
    int m = s[0].size();
    int i = 0;
    for (i = 0; i < m; i++)
    {
        if (s[0][i] != s[n - 1][i])

            break;
    }
    return s[0].substr(0, i);
}

int main()
{

    vector<string> s = {"flower", "flow", "flight"};

    string result = longestprefix(s);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}