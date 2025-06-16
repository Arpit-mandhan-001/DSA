// SORT THE ARRAY OF 0s,1s,2s..

#include <bits/stdc++.h>
using namespace std;

vector<int> sort_array(vector<int> &arr)
{
    vector<int> as;

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i] = 1;
    }
    for (int i = cnt0 + cnt1; i < arr.size(); i++)
    {
        arr[i] = 2;
    }
    //   return as;
}

// THIS ONE IS DUTCH NATIONAL FLAG ALGORITHM
class solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high)
        {

            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main()
{
    // int n=11;
    vector<int> arr = {2, 0, 1};
    vector<int> nums = {0, 0, 2, 0, 1, 1, 0, 2, 1, 2, 0, 2};
    int n = 12;

    cout << "after sorting" << endl;
    solution sol;
    sol.sortColors(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    vector<int> as = sort_array(arr);
     for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << ", ";
        }
    return 0;
}
