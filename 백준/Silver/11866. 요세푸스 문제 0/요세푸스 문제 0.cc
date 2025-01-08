#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, idx = 0;
    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    
    cout << "<";
    while(n--)
    {
        idx += (k - 1);
        if (idx >= v.size()) idx = idx % v.size();
        cout << v[idx];
        if (n != 0) cout << ", ";
        v.erase(v.begin() + idx);
    }
    cout << ">";
}