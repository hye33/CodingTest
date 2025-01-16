#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<bool> v(n);
    for (int i = 0; i < n; i++)
    {
        bool input;
        cin >> input;
        v[i] = input;
    }
    while(m--)
    {
        int method, a, b;
        cin >> method >> a >> b;
        switch (method)
        {
        case 1:
            v[a - 1] = b;
            break;
        case 2:
            for (int i = a - 1; i < b; i++)
                v[i] = !v[i];
            break;
        case 3:
            for (int i = a - 1; i < b; i++)
                v[i] = 0;
            break;
        case 4:
            for (int i = a - 1; i < b; i++)
                v[i] = 1;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}