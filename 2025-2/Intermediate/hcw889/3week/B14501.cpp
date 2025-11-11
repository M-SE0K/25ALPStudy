#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> t(n + 2), p(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> t[i] >> p[i];

    vector<int> dp(n + 2, 0);

    for (int i = n; i >= 1; i--)
    {
        int nxtDay = i + t[i];
        if (nxtDay <= n + 1)
            dp[i] = max(dp[i + 1], p[i] + dp[nxtDay]);
        else
            dp[i] = dp[i + 1];
    }

    cout << dp[1] << "\n";

    return 0;
}
