#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string input;
    while(1)
    {
        getline(cin, input);
        if (input == "***") break;
        reverse(input.begin(), input.end());
        cout << input << '\n';
    }
}