#include<bits/stdc++.h>
using namespace std;

vector<int> printnos(int n){
    if(n==0){
        return {};
    }
  //  n--;

    vector<int> x=printnos(n-1);
    x.push_back(n);
    return x;
}
int main(){
    int n=5;

    vector<int> a=printnos(n);
    for (const int &s : a) {
    cout << s << endl;
  }
  
// for (auto it = a.rbegin(); it !=a.rend(); ++it) {
//     cout << *it << " ";

for (vector<int>::iterator it= a.begin(); it!=a.end(); it++)
{
   cout<<*(it)<<" ";
}



}