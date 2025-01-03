#include <iostream>
#include <string>
using namespace std;

long long square(int a, int b)
{
    long long res = 1;
    for (int i = 0; i < b; i++)
        res = (res * a) % 1234567891;
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int l;
    string str;
    cin >> l >> str;

    long long hash = 0;
    for (int i = 0; i < l; i++)
    {
        hash = (hash + ((str[i] - 'a' + 1) * square(31, i))) % 1234567891;
    }
    hash = hash % 1234567891;
    cout << hash;
}