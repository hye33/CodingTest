#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<vector<char>> board;
    string array[2][8] = {
        {
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
        },
        {
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
        }};

    int n, m;
    int min = 64;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string str;
        vector<char> v;
        cin >> str;
        for (int j = 0; j < m; j++)
            v.push_back(str[j]);
        board.push_back(v);
    }

    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            int sum[2] = {0};
            for (int a = 0; a < 8; a++)
            {
                for (int b = 0; b < 8; b++)
                {
                    char num1 = board[i + a][j + b];
                    char num2 = array[0][a][b];
                    char num3 = array[1][a][b];
                    if (board[i + a][j + b] != array[0][a][b]) sum[0]++;
                    if (board[i + a][j + b] != array[1][a][b]) sum[1]++;
                }
            }
            if (sum[0] < min) min = sum[0];
            if (sum[1] < min) min = sum[1];
        }
    }

    cout << min;
}