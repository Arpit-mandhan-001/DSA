#include <bits/stdc++.h>
using namespace std;

// approach 1=> using sorting
bool valid(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

bool anagram(string s, string t)
{
    vector<int> count(26, 0);

    for (char &ch : s)
    {
        count[ch - 'a']++;
    }
    for (char &ch : t)
    {
        count[ch - 'a']--;
    }

    // for checking that all are zero in vector or not
    bool allzeros = all_of(begin(count), end(count), [](int element)  { return element == 0; });
    return allzeros;
}


int main()
{

    string s = "abcd";
    string t = "dbac";

    bool ans = valid(s, t);
    cout << ans;
    bool ansss = anagram(s, t);
    cout << ansss;
}