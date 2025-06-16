#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


bool rotatestring(string s, string t)
{
  return s.length() == t.length() && (s + s).find(t) != std::string::npos;
}

bool rotateString(string s, string goal) {

        for (int i = 0; i < s.size(); i++) {
            string temp = "";
            temp = s.substr(i) + s.substr(0, i);
            if (temp == goal)
                return true;
        }
        return false;
    }

int main()
{
    string s = "abcd";
    string t = "bcda";
   

    bool ans= rotatestring(s,t);
    bool ansss= rotateString(s,t);

    cout<<ans<<endl<<ansss;

}