#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int dup=n;
int revn=0;
int lastdigit;

while (n > 0) {
  lastdigit = n % 10;
  n = n / 10;
  revn = (revn * 10) + lastdigit;
}
if (revn == dup)
  cout << "true";
else
  cout << "false";

  return 0;
}