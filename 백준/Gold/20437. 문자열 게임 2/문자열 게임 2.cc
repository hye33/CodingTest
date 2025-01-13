#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, k;
    string w;
    vector<int> v[26];
    cin >> t;
    while(t--)
    {
        int minStr = 10001;
        int maxStr = -1;
        bool e = true;
        cin >> w >> k;

        for (auto &a : v) a.clear();
        for (int i = 0; i < w.length(); i++)
            v[w[i] - 'a'].push_back(i);
        
        for (auto &a : v)
        {
            if (a.size() < k) continue;
            e = false; 
            for (int i = 0; i <= a.size() - k; i++)
            {
                int len = a[i + k - 1] - a[i] + 1;
                minStr = min(minStr, len);
                maxStr = max(maxStr, len);
            }
        }
        
        if (e) cout << "-1" << '\n';
        else cout << minStr << " " << maxStr << '\n';
    }
}