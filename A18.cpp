#include <bits/stdc++.h>
using namespace std;
//BRUTE FORCE APPORACH
int max_subarray(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j< n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxi = max(sum, maxi);
        }
    }

    return maxi;
}
// BETTER APPROACH
int Max_subarray(int arr[], int n){
     int maxi= INT_MIN;

     for (int i = 0; i < n; i++)
     {
       int sum=0;
       for (int j = i; j < n; j++)
       {
       sum+=arr[j];
       }
       maxi=max(maxi,sum);
     }
     return maxi;
}
//OPTIMAL APPROACH 
int Max_Subarray(int arr[], int n){
    int maxi= INT_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
     sum+=arr[i];

     if(sum>maxi){
        maxi=sum;
     }
     if(sum<0){
        sum=0;
     }
    }
    return maxi;
    
}
// FOLLOW UP QUESTION FOR PRINTING THE SUBARRAY
int MAX_Subarray(int arr[], int n){
    int maxi= INT_MIN;
    int sum=0;
    int start;
    int ansStart=-1;
    int ansEnd=-1;

    for (int i = 0; i < n; i++)
    {
        if(sum==0) start=i;
     sum+=arr[i];

     if(sum>maxi){
        maxi=sum;
        ansStart=start;
        ansEnd=i;
     }
     if(sum<0){
        sum=0;
     }
    }
     cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "]n";
    
}

int main()
{

    int arr[] = {1,2,-1,2,4,-2,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = max_subarray(arr, n);//BRUTE 
    int Ans= Max_subarray(arr,n);//BETTER
    int ANS= Max_Subarray(arr,n);//OPTIMAL
    int AnS=MAX_Subarray(arr,n);//PRINTING THE SUBAARAY


    cout << " the maximum subarray is " << ANS << endl;

}