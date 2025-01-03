#include <iostream>
#include <string>
using namespace std;

int square(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
        res = res * a;
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

    unsigned int hash = 0;
    for (int i = 0; i < l; i++)
    {
        unsigned int add = (str[i] - 'a' + 1) * square(31, i);
        hash += add;
    }
    hash = hash % 1234567891;
    cout << hash;
}