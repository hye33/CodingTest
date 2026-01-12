#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    char c = s[n - 1];

    switch (c)
    {
        case 'q':
        case 'w':
        case 'e':
        case 'r':
        case 't':
        case 'a':
        case 's':
        case 'd':
        case 'f':
        case 'g':
        case 'z':
        case 'x':
        case 'c':
        case 'v':
            cout << "1";
            break;
        default:
            cout << "0";
            break;
    }
}