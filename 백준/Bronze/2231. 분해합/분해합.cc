#include <iostream>
#include <string>
using namespace std;

int getSum(int a)
{
    int sum = a;
    string str = to_string(a);
    for (int i = 0; i < str.length(); i++)
    {
        sum += str[i] - '0';
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (getSum(i) == n)
        {
            cout << i;
            return 0;
        }
    }

    cout << 0;
}