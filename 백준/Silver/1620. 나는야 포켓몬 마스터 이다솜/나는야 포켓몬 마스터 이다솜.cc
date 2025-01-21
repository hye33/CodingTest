#include <iostream>
#include <cctype>
#include <string>
#include <map>
using namespace std;

string ntoe[100001];
map<string, int> eton;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    string input;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        ntoe[i] = input;
        eton[input] = i;
    }

    while (m--)
    {
        cin >> input;
        if (isdigit(input[0]))
            cout << ntoe[stoi(input)] << '\n';
        else
            cout << eton[input] << '\n';
    }
}