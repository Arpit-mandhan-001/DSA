#include <bits/stdc++.h>
using namespace std;


//optimal approach with sum formula
int missingnumber2(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    cout << sum << endl;
    int s2 = 0;

    for (int i = 0; i < n; i++)
    {
        s2 += nums[i];
    }
    if (s2 == sum)
        return -1;

    //int missingnumber = sum - s2;
   // return missingnumber;
   return sum-s2;
}

// FIND THE MISSING NUMBER IN CONTAINING ARRAY
int missingnumber1(vector<int> &nums)
{
    int n = nums.size();
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[nums[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 0)
            return i;
    }

    return -1;
}

// BRUTE FORCE APPROACH
int missingNumber(vector<int> &nums, int N)
{
    int n = nums.size();
    cout << n << endl;
    for (int i = 0; i <= n; i++)
    {

        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            return i;
        }
    }
}

int main()
{
    int N = 4;
    int a=10,b=20;

    vector<int> nums = {2, 0, 1, 5, 4};
    int ans = missingNumber(nums, N);
    int ans1 = missingnumber1(nums);
    int ans2 = missingnumber2(nums);

    cout << "The missing number is: " << ans2 << endl;

    return 0;
}