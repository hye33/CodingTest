#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int m = v[0] + v[n - 1];
    int v1 = 0, v2 = n - 1;
    int ans1 = 0, ans2 = n - 1;
    while(true)
    {
        if (v[v1] + v[v2] < 0) v1++;
        else v2--;
        if (v1 == v2) break;
        if (abs(v[v1] + v[v2]) < abs(m))
        {
            m = v[v1] + v[v2];
            ans1 = v1;
            ans2 = v2;
        }
    }
    cout << v[ans1] << ' ' << v[ans2];
}