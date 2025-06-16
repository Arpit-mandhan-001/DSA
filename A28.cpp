#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> st;
        int n= nums.size();

        for (int i = 0; i <= n; i++) {
            set<int> hashset;
            for (int j = i + 1; j <= n; j++) {
                int third = -(nums[i] + nums[j]);
                if (hashset.find(third) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }


    vector<vector<int>> ThreeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    vector<int> temp = {nums[i], nums[left], nums[right]};
                    ans.push_back(temp);
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                   
                }
              }
            }
            return ans;
        }



int main(){

vector<int> nums={-1,0,1,2,-1,-4};
vector<vector<int>> answer= ThreeSum(nums);// otpimal
vector<vector<int>> answer= threeSum(nums);// better
for (auto it : answer) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";


}