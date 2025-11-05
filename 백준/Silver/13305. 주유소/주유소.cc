#include <iostream>
using namespace std;

long long len[100001];
long long price[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n - 1; i++)
        cin >> len[i];
    for (int i = 0; i < n; i++)
        cin >> price[i];
    
    long long sumPrice = 0;
    sumPrice += price[0] * len[0];
    
    long long minPrice = price[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (price[i - 1] < price[i])
        {
            price[i] = price[i - 1];
        }
        sumPrice += price[i] * len[i];
    }
    
    cout << sumPrice;
    
    return 0;
}