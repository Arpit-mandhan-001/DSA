#include <iostream>
using namespace std;

//THIS IS OPTIMAL ONE FOR IDENTIFYING THE NUMBER WHUCH APEAR ONLY SINGLE TIMES


 int findsingle(int arr[], int n)
{

    int xorr = 0;

    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
 
}
int main(){


int arr[] = {2, 3, 3, 5, 5, 6, 6};
int n = 7;


int result= findsingle(arr, n);

cout <<"the final result is "<<result<<endl;
}

