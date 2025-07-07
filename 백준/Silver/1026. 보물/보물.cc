#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a, b;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        b.push_back(input);
    }
    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end(), less<>());

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i] * b[i];
    cout << sum;
}