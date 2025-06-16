#include<bits/stdc++.h>
using namespace std;

  int maxLen(vector<int>&A, int n)
    {   
       int maxlen=0;
       int sum=0;
       unordered_map<int,int> mpp;
       
       for(int i=0; i<n; i++){
           sum+=A[i];
           
           if(sum==0){
               maxlen=i+1;
           }else if(mpp.find(sum)!=mpp.end()){
               maxlen= max(maxlen, i-mpp[sum]);
           }else{
               mpp[sum]=i;
           }
       }
       return maxlen;
    }

   int main(){
   vector<int> A={1,2,-3,3,4,-2,-2,1};// optimal
  int n= A.size();

   cout<<maxLen(A,n);
    }