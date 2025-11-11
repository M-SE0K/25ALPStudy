#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
const ll MOD = 1000000009LL;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<int> q(t);
    int maxN = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> q[i];
        if (q[i] > maxN)
            maxN = q[i];
    }

    vector<ll> dp(maxN + 3, 0);
    dp[0] = 1;

    if (maxN >= 1)
        dp[1] = 1;
    if (maxN >= 2)
        dp[2] = 2;
    if (maxN >= 3)
        dp[3] = 4;

    for (int i = 4; i <= maxN; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    // 이 코드가 가능한 이유 : 가능한 경우의 수가 규칙적으로 있기 때문
    for (int x : q)
        cout << dp[x] % MOD << "\n";
    
    return 0;
}
