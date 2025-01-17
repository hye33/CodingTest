#include <iostream>
using namespace std;

int arr[1000][1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, find;
    cin >> n >> find;
    int num = n * n + 1;
    int row = 0; int col = 0;
    int dir = 0;
    int cnt = 0; int dirCnt = 1;
    int s = n;
    int coord[2];

    while(--num)
    {
        if (num == find) { coord[0] = row + 1; coord[1] = col + 1; }
        arr[row][col] = num;

        if (++cnt == s)
        {
            dir = (dir == 3 ? 0 : dir + 1);
            dirCnt++;
            cnt = 0;
        }
        if (dirCnt > 1)
        {
            s--;
            dirCnt = 0;
        }

        switch (dir)
        {
        case 0: // down
            row++; break;
        case 1: // right
            col++; break;
        case 2: // up
            row--; break;
        case 3: // left
            col--; break;
        default: break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }

    cout << coord[0] << " " << coord[1];
}