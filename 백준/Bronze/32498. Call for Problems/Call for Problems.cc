#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int count = 0;
    int rate;
    while(n--)
    {
        cin >> rate;
        if (rate % 2 != 0) count++;
    }
    cout << count;
}