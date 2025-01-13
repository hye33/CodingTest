#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, n, input;
    long long right, left, mid;
    vector<int> v;
    cin >> k >> n;
    while(k--)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    right = v.back();
    left = 1;
    mid = (left + right) / 2;
    while(left + 1 < right)
    {
        int count = 0;
        for (auto cm : v)
            count += cm / mid;

        if (count >= n)
            left = mid;
        else
            right = mid;

        mid = (left + right) / 2;
    }

    int count = 0;
    for (auto cm : v)
        count += cm / (mid + 1);
    if (count >= n) mid++;

    cout << mid;
}