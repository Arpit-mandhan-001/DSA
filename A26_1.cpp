#include <bits/stdc++.h>
using namespace std;

// WE HAVE GIVEN ROW AND COLOUM AND WE HAVE TO RETURN THE ELEMENT

int ans(int n, int m)
{
    long long res = 1;
    for (int i = 0; i < m; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int ncr(int r, int c)
{

    int element = ans(r - 1, c - 1);
    return element;
}

int main()
{

    int r, c;
    cin >> r;
    cout << "enter c " << endl;
    cin >> c;

    cout << "the element is " << ncr(r, c);
}