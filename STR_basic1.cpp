#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// iterative approach

bool check(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
// recursive approach
bool solve(int i, int j, string s)
{
    if (i > j)
        return true;
    else if (s[i] == s[j])
        return solve(i+1, j-1, s);
    else
        return false;
}

bool check2(string s)
{
    int i = 0;
    int j = s.size() - 1;
    return solve(i, j, s);
}

int main()
{
    string s = "ababa";

    bool ans = check(s);
    bool anss = check2(s);
    cout << ans <<anss;
}