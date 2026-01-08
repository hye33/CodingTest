#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n;
    cin >> n;
    cout << (n * 78 / 100) << " " << (n * 956 / 1000);
}