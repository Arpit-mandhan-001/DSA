#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    // cin>>6;
   int arr[6]={1,4,5,6,4,3};


//    for (int i = 0; i < n; i++)
//    {
//    cin>>arr[i];
//    }
   
   int hash[13]={0};
   for (int i = 0; i <n; i++)
   {
    hash[arr[i]]++;

   }

   int q;
   cin>>q;
   while(q--){
    int num;
    cin>>num;
    cout<<hash[num]<<" ";
   }
   


}