#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, string> arr;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    string addr, pw;
    while(n--)
    {
        cin >> addr >> pw;
        arr[addr] = pw;
    }
    while(m--)
    {
        cin >> addr;
        cout << arr[addr] << '\n';
    }
}