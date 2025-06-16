#include <bits/stdc++.h>
using namespace std;

int count_digit(int n)
{
    string x = to_string(n);
    return x.length();
}

int main()
{
    //                           SOLUTION---->>> 1
    /*int n;
   int count=0;
   cin>>n;
   while (n>0)
   {
       n=n/10;
     count=count+1;

   }
   cout<< count
   ;*/

    //                             SOLUTION--->>>>2

    /*
    int n;
    cin>>n;
    cout<<count_digit(n);
    */
    //                                SOLUTION---->>3
  
    int n;
    cin >> n;
    int count = (int)(log10(n) + 1);
    cout << count;

    return 0;
}
