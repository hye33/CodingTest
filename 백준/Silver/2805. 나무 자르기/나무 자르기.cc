#include <iostream>
using namespace std;

int arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, maxLen = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxLen = max(maxLen, arr[i]);
    }

    long long left = 0, right = maxLen;
    long long mid = (left + right) / 2;
    while (left <= right)
    {
        long long sum = 0;
        for (auto& tree : arr)
            sum += (tree > mid ? (tree - mid) : 0);
        
        if (sum == m) break;
        if (sum > m)
            left = mid + 1;
        else if (sum < m)
            right = mid - 1;
        mid = (left + right) / 2;
    }
    cout << mid;
}