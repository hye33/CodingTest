#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int score[2];
int t[2];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, team, prev = 0;
    string str;
    cin >> n;
    while(n--)
    {
        cin >> team >> str;
        int time = stoi(str.substr(0, 2)) * 60 + stoi(str.substr(3, 2));
        if (score[0] != score[1])
            (score[0] > score[1] ? t[0] : t[1]) += time - prev;
        score[team - 1]++;
        prev = time;
    }
    if (score[0] != score[1])
        (score[0] > score[1] ? t[0] : t[1]) += 2880 - prev;
    
    cout << setw(2) << setfill('0') << t[0] / 60 << ":";
    cout << setw(2) << t[0] % 60 << '\n';
    cout << setw(2) << t[1] / 60 << ":";
    cout << setw(2) << t[1] % 60 << '\n';
}