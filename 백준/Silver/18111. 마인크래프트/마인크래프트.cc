#include <iostream>
using namespace std;

int n, m, b;
int arr[500][500];
int maxh = 0, minh = 256;
int minTime = 128000000, maxHeight = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            maxh = max(arr[i][j], maxh);
            minh = min(arr[i][j], minh);
        }
    }

    for (int h = maxh; h >= 0; h--)
    {
        int t = 0, block = b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] > h)
                {
                    t += (arr[i][j] - h) * 2;
                    block += arr[i][j] - h;
                }
                else if (arr[i][j] < h)
                {
                    t += (h - arr[i][j]);
                    block -= (h - arr[i][j]);
                }
            }
        }
        if (block < 0) continue;
        if ((t < minTime) || (t == minTime && h > maxHeight))
        {
            minTime = t;
            maxHeight = h;
        }
    }

    cout << minTime << ' ' << maxHeight;
}