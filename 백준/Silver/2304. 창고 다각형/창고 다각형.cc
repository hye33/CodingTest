#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> arr[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    sort(arr, arr + n);

    int sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int left = 0, right = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j].second >= i)
            {
                if (!left) left = arr[j].first;
                right = max(right, arr[j].first + 1);
            }
        }
        sum += (right - left);
    }

    cout << sum;
}