#include <bits/stdc++.h>
using namespace std;

long long func(int i, int n)
{
    long long ans = pow(i, n);

    return ans;
}
int NthRoot(int n, int m)
{
    // Use linear search on the answer space:
    for (int i = 1; i <= m; i++)
    {
        long long val = func(i, n);
        if (val == m * 1ll)
            return i;
        else if (val > m * 1ll)
            break;
    }
    return -1;
}

int funct(long long mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int nthroot(int n, int m)
{
    int low = 1, high = m;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        int midn = funct(mid, n, m);
        if (midn == 1)
            return mid;
        else if (midn == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m); // brute
    int answer = nthroot(n, m);

    cout << "The answer is: " << answer << "\n";
    return 0;
}
