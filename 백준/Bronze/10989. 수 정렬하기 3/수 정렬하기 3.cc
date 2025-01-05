#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<int, int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        nums[input]++;
    }

    for (int i = 1; i <= nums.size(); i++)
    {
        for (int j = 0; j < nums[i]; j++)
        {
            cout << i << '\n';
        }
    }
}