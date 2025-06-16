#include <bits/stdc++.h>
using namespace std;
//BRUTE
vector<int> majority_element(vector<int> &arr)
{
    vector<int> ls;
    int n = arr.size();

    for (int i = 0; i < arr.size(); i++)
    {
        if ((ls.size() == 0) || ls[0] != arr[i])
        {
            int cnt = 0;
            for (int j = 0; j< n; j++)
            {
                if (arr[j] == arr[i])
                {
                    cnt++;
                }
            }
            if (cnt > n / 3)
            {
            ls.push_back(arr[i]);
            }
            if (ls.size() == 2)
                break;
        }
    }
    return ls;
}
//BETTER
vector<int> maj_ele(vector<int> &arr){
int n= arr.size();
int mini= (int)(n/3)+1;
vector<int> ls;
map<int,int> mpp;

for (int i = 0; i < n; i++)
{
  mpp[arr[i]]++;
  if(mpp[arr[i]]==mini){
    ls.push_back(arr[i]);
  }
  if(ls.size()==2) break;

}
sort(ls.begin(), ls.end());// for sorting take very less time as there are only two number in ls

return ls;

}
//OPTIMAL

    vector<int> majorityElement(vector<int>& nums) {
       int n= nums.size();
        int cnt1=0;
        int cnt2=0;
        int el1= INT_MIN;
        int el2= INT_MIN;

        for(int i=0; i<n; i++){

            if(cnt1==0 && el2!=nums[i]){
                cnt1++;
                el1=nums[i];
            }
            else if(cnt2==0 && el1!=nums[i]){
                cnt2++;
                el2=nums[i];
            }
            else if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;

            else{
                cnt1--;
                cnt2--;
            }
        }
            vector<int> ls;
           cnt1=0, cnt2=0;
           for(int i=0; i<n; i++){
            if(el1==nums[i]) cnt1++;
            if(el2==nums[i]) cnt2++;
           }
           int mini=(int)(n/3)+1;

           if(cnt1>=mini) ls.push_back(el1);
           if(cnt2>= mini) ls.push_back(el2);

           sort(ls.begin(), ls.end());
         if (ls.size() > 1 && ls[0] == ls[1]) ls.pop_back();
           return ls;

        
    }



int main()
{
    vector<int> nums={2,3,2,2,2,4,8,9};
    vector<int> arr = {2, 3, 3, 3, 2, 2, 5, 6};
    vector<int> ans = majority_element(arr);//BRUTE
    vector<int> ANS= maj_ele(arr);// better
    vector<int> aNs=  majorityElement(nums);// optimal

     cout << "The majority elements are: ";
    for (auto it : aNs)
        cout << it << " ";
    cout << "\n";
}