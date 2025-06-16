#include <bits/stdc++.h>
using namespace std;

int beautyofsum(string s)
{
    int ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
        map<char, int> mp;

        for (int j = i; j < s.length(); j++)
        {
            mp[s[j]]++;

            int least = INT_MAX;
            int most = INT_MIN;

            for (auto it : mp)
            {
                least = min(least, it.second);
                most = max(most, it.second);
            }

            ans += most - least;
        }
    }
    return ans;
}

int main(){
    string s="aabcb";
    int ans= beautyofsum(s);
    cout<<ans;
}