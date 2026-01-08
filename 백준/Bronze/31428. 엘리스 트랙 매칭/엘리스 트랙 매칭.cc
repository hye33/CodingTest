#include <iostream>
using namespace std;

int arr[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char input;
    while (n--)
    {
        cin >> input;
        arr[input - 'A']++;
    }
    cin >> input;
    cout << arr[input - 'A'];
}