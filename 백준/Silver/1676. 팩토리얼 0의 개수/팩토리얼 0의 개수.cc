#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int count[2] = {};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while(1)
        {
            if (num % 2 == 0)
            {
                num /= 2;
                count[0]++;
            }
            else if (num % 5 == 0)
            {
                num /= 5;
                count[1]++;
            }
            else
                break;
        }
    }
    cout << min(count[0], count[1]);
}