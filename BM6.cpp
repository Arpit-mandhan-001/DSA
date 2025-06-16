#include <bits/stdc++.h>
using namespace std;

void printnumber(int n)
{

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << endl;
    }
  }
}
void printnumber2(int w)
{
 vector<int> ls;
// WE CAN ALSO WRITE i<=sqrt(w) AS i*i<=w.
//TIME COMPLEXITY OF THUS IS O(sqrt(n))
  for (int i = 1; i*i<=w; i++)
  {
    if (w % i == 0)
    {
     // cout << i << " " << endl;
     ls.push_back(i);
      if (w / i != i)
       // cout << w / i << endl;
       ls.push_back(w/i);
    }
  }
  // TIME COMPLEXITY IS O(no. of factors * no. of factors)
  sort(ls.begin(),ls.end());
  // time complexity is O(no. of factors)
  for(auto it: ls) cout <<it<<endl;

}


int main()
{
  int n, w;
  cin>> w;
  cin>>n;


  printnumber(n);
  printnumber2(w);
}