#include <iostream>
using namespace std;

bool arr[21];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m;
    cin >> m;
    string method;
    int target;
    while (m--)
    {
        cin >> method;
        if (method == "add")
        {
            cin >> target;
            arr[target] = 1;
        }
        else if (method == "remove")
        {
            cin >> target;
            arr[target] = 0;
        }
        else if (method == "check")
        {
            cin >> target;
            cout << arr[target] << '\n';
        }
        else if (method == "toggle")
        {
            cin >> target;
            arr[target] = !arr[target];
        }
        else if (method == "all")
            for (auto& i : arr) i = 1;
        else if (method == "empty")
            for (auto& i : arr) i = 0;
    }   
}