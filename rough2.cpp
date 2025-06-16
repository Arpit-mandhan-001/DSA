#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
vector<char> ans;
int number;

void solve(int num, int i)
{

    if (num == 1)
    {
        ans.push_back('1');
        return;
    }
    if (num % 2 == 1)
    {
        ans.push_back('1');
    }
    else
    {
        ans.push_back('0');
    }
    solve(num / 2, i);

}


int main()
{
    int num = 70;
    int i = 3;

    solve(num, i);
    for (auto it = ans.rbegin(); it != ans.rend(); ++it)
    {
        std::cout << *it;
    }

  
