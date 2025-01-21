#include <iostream>
using namespace std;

char arr[501][501];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w, input;
    cin >> h >> w;
    for (int j = 0; j < w; j++)
    {
        cin >> input;
        for (int i = 0; i < h - input; i++)
            arr[i][j] = 'W';
        for (int i = h - input; i < h; i++)
            arr[i][j] = 'B';
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (arr[i][j] == 'B') break;
            arr[i][j] = 'E';
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = w - 1; j >= 0; j--)
        {
            if (arr[i][j] == 'B') break;
            arr[i][j] = 'E';
        }
    }

    int count = 0;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            if (arr[i][j] == 'W') count++;
    
    cout << count;
}