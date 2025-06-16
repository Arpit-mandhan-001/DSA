#include <bits/stdc++.h>
using namespace std;
// BRUTE FORCE
vector<int> rearrange_array(vector<int> &arr)
{
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
            neg.push_back(arr[i]);
    }
    for (int i = 0; i < arr.size() / 2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
}
// OPTIMAL APPROACH
vector<int> Rearrange_arr(vector<int> &arr)
{
    int n = arr.size();
    vector<int> as(n, 0);
    int pos_index = 0, neg_index = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            as[pos_index] = arr[i];
            pos_index += 2;
        }
        else
        {
            as[neg_index] = arr[i];
            neg_index += 2;
        }
    }
    return as;
}
// if (+ve != -ve)
#include <iostream>
#include <vector>
using namespace std;

vector<int> REarrange_arr(vector<int> &arr) {
    vector<int> pos;
    vector<int> neg;

    // Separate positive and negative numbers
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    // Rearrange the array with alternating positive and negative numbers
    int posIndex = 0, negIndex = 0, index = 0;
    while (posIndex < pos.size() && negIndex < neg.size()) {
        arr[index++] = pos[posIndex++];
        arr[index++] = neg[negIndex++];
    }

    // If there are remaining positive numbers, add them
    while (posIndex < pos.size()) {
        arr[index++] = pos[posIndex++];
    }

    // If there are remaining negative numbers, add them
    while (negIndex < neg.size()) {
        arr[index++] = neg[negIndex++];
    }

    return arr;
}



int main()
{

    vector<int> arr = {2, -1, -1, -5, 7, 3, -5, 1};

    vector<int> ans = rearrange_array(arr);  // BRUTE
    vector<int> answer = Rearrange_arr(arr); // OPTIMAL
    vector<int> ANS= REarrange_arr(arr);//OF UNEQUAL =VE AND +VE NUMBERS

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << "     " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
     cout<<endl;

      cout << "Rearranged array: ";
    for (int i = 0; i < ANS.size(); i++) {
        cout << ANS[i] << " ";
}
}