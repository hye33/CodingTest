#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, explode, res = "";
    cin >> str >> explode;

    int len = explode.length();
    char lastChar = explode.back();
    for (int i = 0; i < str.length(); i++)
    {
        res += str[i];
        if (str[i] == lastChar)
        {
            bool e = true;
            for (int j = 0; j < len; j++)
                if (res[res.length() - len + j] != explode[j])
                    e = false;
            if (e)
                res.erase(res.length() - len, len);
        }
    }

    cout << ((res.length() == 0) ? "FRULA" : res);
}