#include <bits/stdc++.h>
using namespace std;



void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;// temparay array
    int left = low;
    int right = mid + 1;


//  storing element in temproray array in a sorted way
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
        right++;
        }
    }

    // if elemet on the left half are still left
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

   // if elemet on the right half are still right
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

// for transferiing all the elemt fron temp to array
    for (int i = low; i <= high; i++)
    {
       arr[i]=temp[i-low];
    }
    
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);// left half
    merge_sort(arr, mid + 1, high);// right half
    merge(arr, low, mid, high);// merging both 
}

int main()
{
    int n = 5;

    vector<int> arr = {3, 6, 4, 8, 1};

    cout << "Array befor sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    merge_sort(arr, 0, n - 1);
    cout << "array after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
