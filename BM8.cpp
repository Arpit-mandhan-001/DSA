#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
void printnumber(int n, int m)
{
    int ans;

    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }

    cout << "the GCD and HCF is :" << ans;
}
int printnumber1(int n, int m)
{

    while (n > 0 && m > 0)
    {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }
    if (n == 0)
        return m;
    return n;
}

int main()
{
  int n, m;
    cin >> n >> m;

   cout<< printnumber1(n, m)<<endl;
   
   printnumber(n,m);

	int a = 52, b = 8;
	cout <<"The GCD of the two numbers is "<<gcd(a, b);
}