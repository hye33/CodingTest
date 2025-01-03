#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool first = true;

    while(true)
    {
        int num[3];
        int maxIdx = 0;
        for (int i = 0; i < 3; i++)
            cin >> num[i];
        
        if (num[0] == 0 && num[1] == 0 && num[2] == 0)
            return 0;
        
        for (int i = 1; i < 3; i++)
        {
            if (num[i] > num[maxIdx])
                maxIdx = i;
        }

        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != maxIdx)
                sum += num[i] * num[i];
        }

        if (num[maxIdx] * num[maxIdx] == sum)
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }
}