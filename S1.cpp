#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = arr[i];

        for (int j = 0; j <= n - 1; i++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout << "after selection sort" << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    cout<<"hello"<<endl;
}