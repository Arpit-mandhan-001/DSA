#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// using sorting

int countbracket(string str, int n)
{
    int count = 0;
    int result = 0;

    for (auto &ch : str)
    {

        if (ch == '(')
            count++;
        else if (ch == ')')
            count--;
        else
            continue;

        result = max(result, count);
    }
    return result;
}

//using stack

int countbrac(string str){
      stack<char> st;
      int result=0;

      for(char &ch :str){

        if(ch=='(') st.push(ch);
        else if( ch==')') st.pop();
        result=max(result, (int)st.size());
      }
      return result;

}

int main()
{
    string str = "";
    int n = 15;
    int ans = countbracket(str, n);
    int answer= countbrac( str);
    cout << ans<<answer;
}