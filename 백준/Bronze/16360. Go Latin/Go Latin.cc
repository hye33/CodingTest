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
        char c = word.back();
        word.pop_back();
        if (c == 'a') word += "as";
        else if (c == 'i' || c == 'y') word += "ios";
        else if (c == 'l') word += "les";
        else if (c == 'n') word += "anes";
        else if (c == 'e' && word.back() == 'n')
        {
            word.pop_back();
            word += "anes";
        }
        else if (c == 'o') word += "os";
        else if (c == 'r') word += "res";
        else if (c == 't') word += "tas";
        else if (c == 'u') word += "us";
        else if (c == 'v') word += "ves";
        else if (c == 'w') word += "was";
        else
        {
            word += c;
            word += "us";
        }

        cout << word << '\n';
    }
}