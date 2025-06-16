#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> four_sum(vector<int> &nums, int target)
{

  set<vector<int>> st;
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      set<long long> hashset;
      for (int k = j + 1; k < n; k++)
      {
        long long sum = nums[i] + nums[j];
        sum += nums[k];
        long long forth = target - sum;

        if (hashset.find(forth) != hashset.end())
        {
          vector<int> temp = {nums[i], nums[j], nums[k], (int)(forth)};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }

        hashset.insert(nums[k]);
      }
    }
  }

  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
  vector<vector<int>> ans;
  sort(nums.begin(), nums.end());
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    if (i != 0 && nums[i] == nums[i - 1])
      continue;
    for (int j = i + 1; j < n; j++)
    {
      if (j != i + 1 && nums[j] == nums[j - 1])
        continue;
      int k = j + 1;
      int l = n - 1;
      while (k < l)
      {
        long long sum = nums[i];
        sum += nums[j];
        sum += nums[k];
        sum += nums[l];
        if (sum == target)
        {
          vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
          ans.push_back(temp);
          k++;
          l--;

          while (k < l && nums[k] == nums[k - 1])
            k++;
          while (k < l && nums[l] == nums[l + 1])
            l--;
        }
        else if (sum < target)
        {
          k++;
        }
        else
        {
          l--;
        }
      }
    }
  }
  return ans;
}

int main()
{

  vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
  int target;
  cin >> target;

  vector<vector<int>> ans = four_sum(nums, target); // better
  vector<vector<int>> ans = fourSum(nums, target);  // optimal

  for (auto it : ans)
  {
    cout << "[";
    for (auto ele : it)
    {
      cout << ele << " ";
    }
    cout << "]";
    cout << "\n";
  }
}