#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, num;
    int sum = 0;
    cin >> str;
    bool minus = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-')
        {
            sum += (minus ? -stoi(num) : stoi(num));
            if (str[i] == '-') minus = true;
            num = "";
        }
        else
            num += str[i];
    }
    sum += (minus ? -stoi(num) : stoi(num));
    cout << sum;
}