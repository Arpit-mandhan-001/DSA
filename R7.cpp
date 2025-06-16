#include <bits/stdc++.h>
using namespace std;
// REEVERSE THE ARRAY


void reverseArray(int arr[], int low, int high)
{

    if (low < high)
    {

        swap(arr[low], arr[high]);
        reverseArray(arr, low + 1, high - 1);
    }
}

void printArray(int arr[], int n)
{
    cout << "the reverse Array  is :-" << endl;

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " " ;
    }
}

int main()
{
    int n = 8;
    int arr[] = {5, 4, 3, 2, 9,8,7,1};
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}