#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high)
{

    if (low < high)
    {
        int PIindex = partition(arr, low, high);
        qs(arr, low, PIindex - 1);
        qs(arr, PIindex + 1, high);
    }
}

vector<int> quick_sort(vector<int> arr)
{

    qs(arr, 0, arr.size() - 1);

    return arr;
}

int main()
{

    vector<int> arr = {4, 6, 2, 7, 9, 2, 5};
    int n = arr.size();
    cout << "before using sorting" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    arr = quick_sort(arr);
    cout << "after using sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    //cout<<arr[0];
    return 0;
}

