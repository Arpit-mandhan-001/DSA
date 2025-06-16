#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> printnos(int x)
{

    int s = x;

    if (s < 1)
    {
        return {};
    }
    cout << s << " ";
    x--;
    vector<int> v = printnos(x);

    return v;
}

int main()
{

    int x = 5;
    vector<int> a = printnos(x);

    for (const int &s : a)
    {
        cout << s << endl;
    }
}
