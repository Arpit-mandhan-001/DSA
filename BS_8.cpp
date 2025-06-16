#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
            continue;
        }
        // if left is sorted
        else if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
            {
                // element exist
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else
        {
            if (nums[mid] <= nums[high])
            {
                if (nums[mid] < target && nums[high] >= target)
                {
                    low = mid + 1;
                }
                else
                    high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {0, 0, 1, 0, 0, 0, 0, 0, 0};
    int n = 9, target = 1;
    int ans = search(nums, target);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}