#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t, p;
    int size[6];

    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> size[i];
    cin >> t >> p;

    int shirtSum = 0;
    for (int i = 0; i < 6; i++)
        shirtSum += (size[i] % t == 0) ? size[i] / t : size[i] / t + 1;

    cout << shirtSum << '\n';
    cout << n / p << " " << n % p;
}