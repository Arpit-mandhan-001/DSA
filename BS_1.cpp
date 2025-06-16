#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &v, int target){
    int n= v.size();
    int low=0;
    int high=n-1;
    
    while(low<=high){
      int mid=(low+high)/2;
        if(v[mid]==target){
            return mid;
        }else if(v[mid]<target){
            low=mid+1;
        }else high= mid-1;
    }
    return -1;
}
        void lbb(vector<int> &a,int target){
            int n= a.size();
        auto lbbb = lower_bound(a.begin(), a.end(), target)-a.begin();
            cout<<lbbb;
        }

int main(){
 vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 17;
    int ind = binarysearch(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
     lbb(a,target);             
    return 0;
}