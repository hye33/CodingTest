#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1001];
int teamMem[201];
int teamScr[201];
int teamCnt[201];
int fifthPlayer[201];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int score = 1;
        fill_n(arr, 1001, 0);
        fill_n(teamMem, 201, 0);
        fill_n(teamScr, 201, 0);
        fill_n(teamCnt, 201, 0);
        fill_n(fifthPlayer, 201, 0);

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            arr[i] = input;
            if (teamMem[arr[i]]++ == 4)
                fifthPlayer[arr[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            if (teamMem[arr[i]] < 6) continue;
            if (teamCnt[arr[i]] > 3)
            {
                score++;
                continue;
            }
            teamScr[arr[i]] += score++;
            teamCnt[arr[i]]++;
        }

        pair<int, int> winner = {0, 60000};
        for (int i = 1; i <= 200; i++)
        {
            if (teamScr[i] == 0 || teamScr[i] > winner.second) continue;
            if (teamScr[i] == winner.second && fifthPlayer[i] > fifthPlayer[winner.first]) continue;
            winner.first = i;
            winner.second = teamScr[i];
        }

        cout << winner.first << '\n';
    }
}