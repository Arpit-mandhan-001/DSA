#include <bits/stdc++.h>
using namespace std;
// METHOD 1 --> USING LOOPS 
void sumnaturalno(int n)
{

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "the sum of natural numbers is " << sum;
}

// MRTHOD 2-->> USING FORMULA
int sumofnaturalno2(int n){

    return n*(n+1)/2;
    }
int main()
{

    int n;
    cin >> n;

   // sumnaturalno(n);
   cout<<sumofnaturalno2(n);
}
