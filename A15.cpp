//  TWO SUM

#include <bits/stdc++.h>
using namespace std;
//OPTIMAL FOR VARIETY ONE

string TWosum(int n, vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
           int left=0;
           int right=n-1;

         while(left<right){
          
          int sum=arr[left]+arr[right];
          if(sum==target)
          {
            return "yes";

          }
          else if (sum<target){
            left++;

          }else
          right--;
          
         }
         return "no";
}

// BETTER APPROACH

string Twosum(int n, vector<int> arr, int target)
{

    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreneed = target - arr[i];
        if (mpp.find(moreneed) != mpp.end())
        {
            return "yes ";
        }
        mpp[num] = i;
    }
    return "no ";
}
// THIS ONE IS OPTIMAL FOR INDEXES ONE
vector<int> TwoSum(int n, vector<int> &arr, int target)
{
  //  vector<int> Answer;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreneed = target - num;

        if (mpp.find(moreneed) != mpp.end())
        {

            return {mpp[moreneed], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

// BRUTE FORCE
string twoSum(int n, vector<int> &arr, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
                return "yes";
        }
    }
    return " no";
}
vector<int> twosum(int n, vector<int> &arr, int target)
{
    vector<int> as;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                as.push_back(i);
                as.push_back(j);
                return as;
            }
        }
    }
    return {-1, -1};
}

int main()
{

    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    vector<int> as = twosum(n, arr, target);
    string answer = Twosum(n, arr, target);
    vector<int> Answer = TwoSum(n, arr, target);
    string Answers = TWosum(n, arr, target);

    cout << "this is the answer for variant 1" << ans << endl;
    cout << "This is the answer for variant 2: " << as[0] << "," << as[1] << endl;
    cout << "this is the answer for variant 1" << answer << endl;
    cout << "This is the answer for variant 2: " << Answer[0] << "," << Answer[1] << endl;
     cout << "this is the answer for variant 1" << Answers << endl;
    return 0;
}
