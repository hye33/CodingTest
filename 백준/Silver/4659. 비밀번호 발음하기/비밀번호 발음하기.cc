#include <iostream>
#include <string>
using namespace std;

bool vowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return true;
    else
        return false;
}

int main()
{
    string pwd;
    string endVar = "end";
    while (true)
    {
        bool cond1 = false;
        bool res = true;
        int count = 1;
        char pastChar = 'n';
        
        cin >> pwd;
        if (pwd.compare(endVar) == 0)
            break;

        for (int i = 0; i < pwd.length(); i++)
        {
            if (vowel(pwd[i]))
            {
                cond1 = true;
                count = (pastChar == 'v') ? count + 1 : 1;
                pastChar = 'v';
            }
            else
            {
                count = (pastChar == 'c') ? count + 1 : 1;
                pastChar = 'c';
            }

            if (count > 2) res = false;

            if (pwd[i] == pwd[i - 1])
            {
                if (pwd[i] != 'e' && pwd[i] != 'o')
                    res = false;
            }
        }
        if (!cond1) res = false;

        if (res)
            cout << '<' << pwd << '>' << " is acceptable." << endl;
        else
            cout << '<' << pwd << '>' << " is not acceptable." << endl;
    }
}