#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, input;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        cout << binary_search(nums.begin(), nums.end(), input) << '\n';
    }
}