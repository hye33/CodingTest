#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str[3];
    int res;
    cin >> str[0] >> str[1] >> str[2];
    for (int i = 0; i < 3; i++)
    {
        if (str[i] != "FizzBuzz" && str[i] != "Fizz" && str[i] != "Buzz")
        {
            res = stoi(str[i]) + 3 - i;
        }
    }

    if (res % 5 == 0)
    {
        if (res % 3 == 0)
            cout << "FizzBuzz";
        else
            cout << "Buzz";
    }
    else if (res % 3 == 0)
        cout << "Fizz";
    else
        cout << res;
}