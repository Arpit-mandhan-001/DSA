#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <cctype>

bool isPalindrome(string s)
{

    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {

        if (!isalnum(s[left]))
        {
            left++;
        }

        else if (!isalnum(s[right]))
        {
            right--;
        }

        else if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }

        else
        {
            left++;
            right--;
        }
    }
    return true;
}

int main()
{

    string str = "ABCGCGDNCBA";
    bool ans = isPalindrome(str);

    if (ans == true)
    {
        cout << "PALINDROME";
    }

    else
    {
        cout << "NOT PALINDROME";
    }
}