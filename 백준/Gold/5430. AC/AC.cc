#include <iostream>
using namespace std;

string arr[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string p, input;
        cin >> p >> n >> input;
        string buf = "";
        int idx = 0;
        for (int i = 1; i < input.length(); i++)
        {
            if (input[i] == ',' || input[i] == ']')
            {
                arr[idx++] = buf;
                buf = "";
            }
            else
                buf += input[i];
        }
        
        bool isForward = true, isError = false;
        int forward = 0, back = n - 1;
        for (int i = 0; i < p.length(); i++)
        {
            if (p[i] == 'R') isForward = !isForward;
            else if (p[i] == 'D')
            {
                if (forward > back)
                {
                    isError = true;
                    break;
                }
                if (isForward)
                    forward++;
                else
                    back--;
            }
        }
        if (isError) cout << "error" << '\n';
        else
        {
            if (forward > back) cout << "[]" << '\n';
            else if (isForward)
            {
                cout << '[';
                for (int i = forward; i < back; i++)
                    cout << arr[i] << ',';
                cout << arr[back] << ']' << '\n';
            }
            else
            {
                cout << '[';
                for (int i = back; i > forward; i--)
                    cout << arr[i] << ',';
                cout << arr[forward] << ']' << '\n';
            }
        }

    }
}