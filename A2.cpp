#include <bits/stdc++.h>
using namespace std;

void brute_force(int arr[], int n)
{

  sort(arr, arr + n);
  int small = arr[1];
  int large = arr[n - 2];

  cout << "the second smallest element in array is :" << small << endl;
  cout << "the second largest  element in array is :" << large << endl;
}

void better_approach(int arr[], int n)
{
  int largest = INT_MIN;
  int second_largest = -1;
  int smallest = arr[0];
  int second_smallest = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (largest < arr[i])
    {
      largest = arr[i];
    }
    if (smallest > arr[i])
    {
      smallest = arr[i];
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < second_smallest && arr[i] != smallest)
      second_smallest = arr[i];
    if (arr[i] > second_largest && arr[i] != largest)
      second_largest = arr[i];
  }
  cout << second_largest << "heheheh" << second_smallest;
}

int secondSmallest(int arr[], int n)
{
  int small = arr[0];
  int secondsmall = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (small > arr[i])
    {
      secondsmall = small;
      small = arr[i];
    }
    else if (arr[i] < secondsmall && arr[i] != small)
    {
      secondsmall = arr[i];
    }
  
  }
    return secondsmall;
}
int secondLargest(int arr[], int n)
{
  int large = arr[0];
  int secondlarges = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (large < arr[i])
    {
      secondlarges = large;
      large = arr[i];
    }
    else if (secondlarges < arr[i] && arr[i] != large)
    {
      secondlarges = arr[i];
    }

  }
  return secondlarges;
}


int main()
{

  int arr[] = {1, 4, 5, 9, 8, 2, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  brute_force(arr, n);
  better_approach(arr, n);
  cout << endl;
  int s_Smallest = secondSmallest(arr, n);
  int s_Largest = secondLargest(arr, n);
  cout<<s_Largest<<"  "<<s_Smallest<<endl;

}