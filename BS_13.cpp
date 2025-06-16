#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// bool canweplace(vector<int> &arr, int dist, int cows)
// {
//   int cntcow = 1, last = arr[0];
//   for (int i = 1; i < arr.size(); i++)
//   {
//     if (arr[i] - dist >= cows)
//     {
//       cntcow++;
//       last = arr[i];
//     }
//     if (cntcow >= cows)
//       return true;
//   }
//   return false;
// }
// int functionn(vector<int> &arr, int cows)
// {
//   int n = arr.size();
//   sort(arr.begin(), arr.end());

//   int limit = arr[n - 1] - arr[0];
//   for (int i = 1; i <= limit; i++)
//   {
//     if (canweplace(arr, i, cows) == false)
//     {
//       return (i - 1);
//     }
//   }
//   return limit;
// }
bool possible(vector<int> &arr,int mid, int k){
int cnt=1;
int last=arr[0];
for (int i = 1; i < arr.size(); i++)
{
 if(arr[i]-last >=mid){
  cnt++;
  last=arr[i];
 }
 if(cnt>=k) return true;
 }
return false;
}
int functions(vector<int> &arr, int k){
  int low=0;
  int n=arr.size();
  sort(arr.begin(),arr.end());
  int high=arr[n-1]-arr[0];
  while(low<=high){
    int mid=(low+high)/2;
    if(possible(arr,mid,k)==true) {
      low=mid+1;
    }else
    high=mid-1;
  }
  return high;
}


int main()
{
  vector<int> arr = {0, 3, 4, 7, 10, 9};
  // 0 3 4 7 9 10
  int k = 4;

  // int ans = functionn(arr, k);
  int answer= functions(arr,k);
  cout << "The maximum possible minimum distance is: " << answer << "\n";
  return 0;
}