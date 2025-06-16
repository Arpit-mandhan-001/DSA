#include <bits/stdc++.h>
using namespace std;
void markrow(vector<vector<int>> &matrix, int n, int m, int i)
{

    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
void markcol(vector<vector<int>> &matrix, int n, int m, int j)
{
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                markrow(matrix, n, m, i);
                markcol(matrix, n, m, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

vector<vector<int>> Zeromatrix(vector<vector<int>> &matrix, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}
int main()
{

    vector<vector<int>> matrix = {{1, 0, 1}, {1, 0, 0}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = zeromatrix(matrix, n, n); // BRUTE APPORACH
    vector<vector<int>> answer = Zeromatrix(matrix, n, m);

    cout << "The Final matrix is: " << endl;
    for (const auto &row : answer)
    {
        for (const auto &ele : row)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    int j = 30;
    if(j>=0){
        cout<<"how are you doing in that theme isn't is greater than even trying to be get more riliable in futurr";
    } else{

    }
}
