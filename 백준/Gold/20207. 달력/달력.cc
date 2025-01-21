#include <iostream>
using namespace std;

int arr[366];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s, e;
    cin >> n;
    while(n--)
    {
        cin >> s >> e;
        for (int i = s; i <= e; i++)
            arr[i]++;
    }

    int count = 0;
    int sum = 0;
    int maxLen = 0;
    for (int i = 1; i < 366; i++)
    {
        if (arr[i] == 0)
        {
            sum += count * maxLen;
            count = 0;
            maxLen = 0;
            continue;
        }
        count++;
        maxLen = max(maxLen, arr[i]);
    }
    sum += count * maxLen;

    cout << sum;
}