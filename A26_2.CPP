#include <bits/stdc++.h>
using namespace std;
//BRUTE FORCE
int function_ncr(int n, int m){
    long long res = 1;
    for (int i = 0; i < m; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
void print_row(int r){
    for (int i = 1; i <= r; i++)
    {

        cout << function_ncr(r - 1, i - 1) << endl;
    }
}
//OPTIMAL
void pascal_traingle(int r){
 int ans=1;
 cout<<ans<<endl;

 for(int i=1; i<r; i++){
    ans=ans*(r-i);
    ans=ans/i;
    cout<<ans<<endl;
 }

}
int main()
{
    int r;
    cin >> r;

    print_row(r);
  pascal_traingle(r);
}