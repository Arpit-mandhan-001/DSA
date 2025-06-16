#include <bits/stdc++.h>
using namespace std;

string result(string st)
{
    string ans;
    int cnt = 0;

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '(')
        {
            if (cnt > 0)
            {
                ans += st[i];
            }
            cnt++;
        }
        else
        {
            cnt--;
            if (cnt > 0)
            {
                ans += st[i];
            }
        }
    }
    return ans;
}

int main()
{
    string st = "(()())(())(()(()))";
    cout << "Before reversing words: " << endl;
    cout << st << endl;
    cout << "After reversing words: " << endl;
    cout << result(st);
    return 0;
}