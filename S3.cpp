#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{

    for (int i =0; i <=n-1; i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
          
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            }
            }

        cout << "After Using bubble sort: "
             << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
int main()
{
    int n = 6;
    int arr[6] = {2, 5, 3, 8, 4, 9};
    cout << "before sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
 
  insertion(arr, n);

    return 0;
}