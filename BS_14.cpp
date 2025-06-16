#include <bits/stdc++.h>
using namespace std;

int cntstud(vector<int> &arr, int pages)
{

    int student = 1;
 long long pagesstudent = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        if (pagesstudent + arr[i] <= pages)
        {
            pagesstudent += arr[i];
        }
        else{
            student ++;
        pagesstudent = arr[i];
        }
    }
    return student;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int cntstudents = cntstud(arr, mid);

        if (cntstudents > m){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
