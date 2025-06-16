#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num)
{

    int n = num.size();

    for (int i = n-1; i >= 0; i--)
    {
        if ((num[i] - '0')%2 != 0)
        {
            return num.substr(0, i + 1);
        }
    }
    return "-1";
}

int main()
{

    string num = "2000";
    cout << largestOddNumber(num);

    return 0;
}