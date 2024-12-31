#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    string num;

    cin >> n;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        sum += stoi(num.substr(i, 1));
    }

    cout << sum;
}