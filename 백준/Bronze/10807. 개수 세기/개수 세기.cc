#include <iostream>
using namespace std;

int arr[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int num, count = 0;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
            count++;
    }
    cout << count;
}