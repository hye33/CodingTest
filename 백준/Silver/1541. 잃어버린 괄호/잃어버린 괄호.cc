#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int res = 0, buf = 0;
    string str, num;
    cin >> str;
    bool inMinus = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+')
        {
            if (inMinus) buf += stoi(num);
            else res += stoi(num);
            num = "";
        }
        else if (str[i] == '-')
        {
            if (inMinus) buf += stoi(num);
            else res += stoi(num);
            res -= buf;
            buf = 0;
            num = "";
            inMinus = true;
        }
        else
            num += str[i];
    }
    res -= buf;
    if (inMinus) res -= stoi(num);
    else res += stoi(num);

    cout << res;
}