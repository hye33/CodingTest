#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    float a, b;
    cin >> a >> b >> n;
    float price = a / b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a / b < price)
            price = a / b;
    }
    cout << (price * 1000);
}