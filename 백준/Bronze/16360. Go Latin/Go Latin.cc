#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string word;
    while(n--)
    {
        cin >> word;
        char c = word[word.length() - 1];
        int len = word.length();
        string res;
        switch (c)
        {
        case 'a':
            res = word.substr(0, len - 1) + "as";
            break;
        case 'i':
        case 'y':
            res = word.substr(0, len - 1) + "ios";
            break;
        case 'l':
            res = word.substr(0, len - 1) + "les";
            break;
        case 'n':
            res = word.substr(0, len - 1) + "anes";
            break;
        case 'o':
            res = word.substr(0, len - 1) + "os";
            break;
        case 'r':
            res = word.substr(0, len - 1) + "res";
            break;
        case 't':
            res = word.substr(0, len - 1) + "tas";
            break;
        case 'u':
            res = word.substr(0, len - 1) + "us";
            break;
        case 'v':
            res = word.substr(0, len - 1) + "ves";
            break;
        case 'w':
            res = word.substr(0, len - 1) + "was";
            break;
        case 'e':
            if (word[len - 2] == 'n')
                res = word.substr(0, len - 2) + "anes";
            else
                res = word + "us";
            break;
        default:
            res = word + "us";
            break;
        }

        cout << res << '\n';
    }
}