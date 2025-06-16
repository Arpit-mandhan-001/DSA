#include<bits/stdc++.h>
using namespace std;

vector<string> printntime(int n){
if(n==0){
    return{};
}
//n--;
vector<string> v= printntime(n-1);

v.push_back("yoo!!");
return v;

}
int main(){
    int n=5;

    vector<string> r= printntime(n);

for (const string &s : r) {
    cout << s << endl;
  }


}