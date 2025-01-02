#include <iostream>
#include <string>
#include <vector>
using namespace std;

void coutWord(vector<char> &word)
{
    for (int i = word.size() - 1; i > -1; i--)
    {
        cout << word[i];
        word.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    vector<char> word;
    bool inTag = false;
    char pastWord = 0;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '<')
        {
            if (pastWord == 'w') cout << ' ';
            coutWord(word);
            inTag = true;
        }
        if (inTag)
        {
            cout << str[i];
            if (str[i] == '>')
            {
                inTag = false;
                pastWord = 't';
            }
            continue;
        }

        if (str[i] == ' ')
        {
            if (pastWord == 'w') cout << ' ';
            coutWord(word);
            pastWord = 'w';
            continue;
        }
        else if (i == str.length() - 1)
        {
            if (pastWord == 'w') cout << ' ';
            word.push_back(str[i]);
            coutWord(word);
            return 0;
        }
        word.push_back(str[i]);
    }
}