#include <bits/stdc++.h>
using namespace std;
// TO FIND THE MAXIMUM 1 CONSECUTIVE

int maximumconsecutive(int arr[])
{

        int cnt = 0;
        int maxi = 0;

        for (int i = 0; i < 11; i++)
        {
            if (arr[i] == 1)
            {
                cnt++;
                maxi = max(maxi, cnt);
                //  cout<<maxi;
            }
            else
            {
                cnt = 0;
            }
        }
        return maxi;
    }
int main()
{

    int arr[] = {1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1};

    cout << maximumconsecutive(arr);

    return 0;
    
}