#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    for (int i = 1; i <= v[0]; i++)
    {
        bool e = false;
        for (auto a : v)
            if (a % i != 0) e = true;
        
        if (!e) cout << i << '\n';
    }
}