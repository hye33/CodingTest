#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string str;
    cin >> str;
    int c = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'C') c++;
        else o++;
    }

    if ((c % (o + 1)) == 0) cout << c / (o + 1);
    else cout << (c / (o + 1) + 1);
}