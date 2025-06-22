#include <iostream>
using namespace std;

int fruit[200001];
int fCount[10];
bool check()
{
    int cnt = 0;
    for (auto& f : fCount)
        if (f > 0) cnt++;
    return cnt <= 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, start = 0, end = 0, maxCount = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> fruit[i];
    while(start < n)
    {
        while(end < n)
        {
            fCount[fruit[end]]++;
            if (!check()) break;
            end++;
        }
        maxCount = max(maxCount, end - start);
        end++;
        fCount[fruit[start]]--;
        start++;
    }
    cout << maxCount;
}