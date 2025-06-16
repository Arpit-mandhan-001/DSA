#include <bits/stdc++.h>
using namespace std;

vector<int> leader_array(vector<int> &arr)
{
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        bool leader = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
vector<int> Leader_array(vector<int> &arr){
        int n= arr.size();
       vector<int> ANS;
       int max= arr[n-1];
       ANS.push_back(arr[n-1]);

       for (int i = n-2; i >= 0; i--)
       {
       if(arr[i]>max){
           ANS.push_back(arr[i]);
           max= arr[i];
       }

       }
       
return ANS;
}

int main()
{

    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leader_array(arr);//BRUTE FPRCE
     vector<int> ANS= Leader_array(arr);// optimal 

    for (int i = ANS.size() - 1; i >= 0; i--)
    {

        cout << ANS[i] << " ";
    }
}
