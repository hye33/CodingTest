#include <iostream>
using namespace std;

char arr[101][101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        for (int j = 0; j < n; j++)
            arr[i][j] = input[j];
    }

    bool e = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i == j) continue;
            if (arr[i][j] != arr[j][i]) e = true;
        }
    }

    cout << (e ? "NO" : "YES");
}