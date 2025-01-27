#include <iostream>
#include <vector>
using namespace std;

int arr[500001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;
    vector<int> v;
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            v.push_back(i);
            while(x % i == 0)
                x = x / i;
        }
    }

    int cnt = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        bool e = false;
        for (auto& s : v)
        {
            if (arr[i] % s == 0)
            {
                e = true;
                break;
            }
        }
        if (!e)
        {
            cnt++;
            sum += arr[i];
        }
    }

    cout << sum / float(cnt);
}