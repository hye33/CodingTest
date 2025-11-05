#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

bool comp(string &a, string &b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    else
    {
        int sumA = 0;
        int sumB = 0;
        for (char c : a)
        {
            if (isdigit(c))
                sumA += (c - '0');
        }
        for (char c : b)
        {
            if (isdigit(c))
                sumB += (c - '0');
        }
        if (sumA == sumB)
            return a < b;
        else
            return sumA < sumB;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    vector<string> v;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        v.push_back(input);
    }
    
    sort(v.begin(), v.end(), comp);
    
    for (int i = 0; i < n; i++)
        cout << v[i] << '\n';

    return 0;
}