#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    set<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        nums.insert(input);
    }  

    for (auto res : nums)
        cout << res << '\n';
}