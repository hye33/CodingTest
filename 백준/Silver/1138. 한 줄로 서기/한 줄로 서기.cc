#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[10] = {};

    for (int i = 1; i <= n; i++)
    {
        int input, count = 0;
        int pnt = 0;
        cin >> input;
        while(count < input)
        {
            if (arr[pnt] == 0)
                count++;
            pnt++;
        }
        while(arr[pnt] != 0) pnt++;
        arr[pnt] = i;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}