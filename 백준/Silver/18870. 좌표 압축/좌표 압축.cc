#include <iostream>
#include <map>
using namespace std;

int n;
map<int, int> s;
int arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s[arr[i]] = -1;
    }

    int cnt = 0;
    for (auto &target : s)
        target.second = cnt++;

    for (int i = 0; i < n; i++)
        cout << s[arr[i]] << ' ';
}