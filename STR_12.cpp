#include<bits/stdc++.h>
using namespace std;

int atoi(string s){
    int i=0;
    int sign=1;
    long ans=0;

    while(i<s.size() && s[i]==' ') i++;

    if(i<s.size() && s[i]=='+' || s[i]=='-'){
        if(s[i]=='-'){
            sign=-1;
        }
        i++;
    }

    while(i<s.size() && s[i]>='0' && s[i]<='9'){
        ans=ans*10+(s[i]-'0');

        if(ans>INT_MAX){
            return sign==-1 ? INT_MAX: INT_MIN;
        }
        i++;
    }
    return ans*sign;

}

int main(){
    
    string s="-432";
    int ans= atoi(s);
    cout<<ans;
}