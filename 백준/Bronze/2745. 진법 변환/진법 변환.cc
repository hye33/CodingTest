#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string str;
    cin >> str >> n;

    long long sum = 0;
    long long digit = 1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (isdigit(str[i]))
            sum += (str[i] - '0') * digit;
        else
            sum += (str[i] - 'A' + 10) * digit;
        
        digit = digit * n;
    }

    cout << sum;
}