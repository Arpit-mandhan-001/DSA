#include<iostream>
using namespace std;

// LINEAR SEARCH
int findnum(int arr[], int target,int size){
int n= size /sizeof(arr[0]);


for (int i = 0; i < n; i++)
{
 if(arr[i]==target)
 return i;
}
return -1;

}
int main(){
int arr[]={1,2,4,3,5,6};
int target=9;
int size=sizeof(arr);
cout<<findnum(arr,target,size);
}
