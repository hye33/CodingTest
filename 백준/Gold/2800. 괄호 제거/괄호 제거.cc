#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    vector<pair<int, int>> idx;
    set<string> res;
    stack<pair<char, int>> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            s.push(make_pair(str[i], i));
        else if (str[i] == ')')
        {
            idx.push_back(make_pair(s.top().second, i));
            s.pop();
        }
    }

    vector<int> target;
    for (int i = 1; i < (1 << idx.size()); i++)
    {
        for (int j = 0; j < idx.size(); j++)
        {
            if ((i & (1 << j)) > 0)
            {
                target.push_back(idx[j].first);
                target.push_back(idx[j].second);
            }
        }

        sort(target.begin(), target.end(), greater());
        string response = str;
        for (auto& index : target)
            response.erase(response.begin() + index);
        
        res.insert(response);
        target.clear();
    }

    for (auto& a : res)
        cout << a << '\n';
}