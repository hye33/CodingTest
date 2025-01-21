#include <iostream>
#include <algorithm>
using namespace std;

string arr[10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    string input;
    sort(arr, arr + n);

    while(m--)
    {
        cin >> input;
        if (binary_search(arr, arr + n, input)) count++;
    }
    cout << count;
}