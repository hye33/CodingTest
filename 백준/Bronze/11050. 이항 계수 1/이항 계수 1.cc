#include <iostream>
using namespace std;

int getFactorial(int a)
{
    if (a <= 1) return 1;
    return a * getFactorial(a - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;

    cin >> n >> k;
    cout << getFactorial(n) / (getFactorial(n-k) * getFactorial(k));
}