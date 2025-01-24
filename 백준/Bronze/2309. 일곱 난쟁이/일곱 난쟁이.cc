#include <iostream>
#include <algorithm>
using namespace std;

int arr[9];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (auto& input : arr)
        cin >> input;

    sort(arr, arr + 9);
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == j) continue;
            int sum = 0;
            for (int k = 0; k < 9; k++)
            {
                if (k == i || k == j) continue;
                sum += arr[k];
            }
            if (sum == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k == i || k == j) continue;
                    cout << arr[k] << '\n';
                }
                return 0;
            }
        }
    }
}