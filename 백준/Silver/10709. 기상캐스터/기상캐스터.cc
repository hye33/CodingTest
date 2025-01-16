#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w;
    string input;
    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        int cloud = -1;
        cin >> input;
        for (int j = 0; j < w; j++)
        {
            if (input[j] == 'c')
            {
                cout << 0 << " ";
                cloud = 0;
            }
            else if (cloud == 0)
                cout << -1 << " ";
            else
                cout << cloud << " ";

            if (cloud > -1) cloud++;
        }
        cout << '\n';
    }
}