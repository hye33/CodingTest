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
    vector<int> time(n);
    for (int i = 0; i < n; i++)
        cin >> time[i];
    
    sort(time.begin(), time.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += time[i] * (n - i);
    
    cout << sum;
}