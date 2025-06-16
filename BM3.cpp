#include <bits/stdtr1c++.h>
using namespace std;

 int main(){
    int n;
    cin>>n;
int revn=0;
int lastdigit;

// while (n>0)
// {
//   lastdigit=n%10;
//   n=n/10;
//   revn= (revn*10)+lastdigit;

// }
cout<<revn<<endl;

while(n>0){

  lastdigit=n%10;
  n=n/10;
  cout<<lastdigit<<"";
}
return 0;}