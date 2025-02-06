#include <iostream>
using namespace std;

int arr[1000001] = { 0, 0, 1, 1 };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n; 
    for (int i = 4; i <= n; i++)
    {
        arr[i] = arr[i - 1] + 1;
        if (i % 3 == 0) arr[i] = min(arr[i / 3] + 1, arr[i]);
        if (i % 2 == 0) arr[i] = min(arr[i / 2] + 1, arr[i]);   
    }
    cout << arr[n];
}