#include <bits/stdc++.h>
using namespace std;

// LEFT ROTATE ARRAY BY ONE PLACE
void left_rotate(int arr[], int n)
{

    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {2, 4, 3, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    left_rotate(arr, n);
}