#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string numbers;
    cin >> numbers;
    int n = 0;
    string strN;

    for(int i = 0; i < numbers.length();)
    {
        n++;
        strN = to_string(n);
        for (int j = 0; j < strN.length(); j++)
        {
            if (strN[j] == numbers[i])
                i++;
        }
    }
    cout << n;
}