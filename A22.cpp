#include<bits/stdc++.h>
using namespace std;

bool linearsearch(vector<int> & a, int num){
for (int i = 0; i < a.size(); i++)
{
if(a[i]== num) return true;
}
return false;
}
int longest_consecutive(vector<int> & a){
 int n= a.size();
int longest= 1;

for (int i = 0; i < n; i++)
{
  int x= a[i];
  int cnt=1;


while(linearsearch(a, x+1)==true){
    x+=1;
    cnt+=1;
}
longest= max(longest, cnt);

}
return longest;
}
int long_consecutive(vector<int> &a){
if(a.size()==0) return 0;
sort(a.begin(), a.end());
int n = a.size();
int longestsmaller= INT_MIN;
int cnt=0;
int longest =1;

for (int i = 0; i < n; i++)
{
 if(longestsmaller==a[i]-1){
    cnt+=1;
    longestsmaller= a[i];
 }
 else if(longestsmaller!= a[i]){
    cnt=1;
    longestsmaller=a[i];

 }
 longest= max(longest, cnt);
}
return longest;

}


int main(){
    vector<int> a={2,3,4,5,6,11,12,13,14,15,16,9,100};

int ans= longest_consecutive(a);//BRUTE 
cout<< ans<<endl;
int Ans= long_consecutive(a);// BETTER
cout<<Ans;
}
