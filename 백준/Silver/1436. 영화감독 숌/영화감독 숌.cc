#include <iostream>
#include <string>
using namespace std;

bool getSixNum(int n)
{
    string str = to_string(n);
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '6')
            count++;
        else
            count = 0;
        if (count > 2) return true;
    }
    return (count > 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, title = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        title++;
        while(!getSixNum(title)) title++;
    }
    cout << title;
}