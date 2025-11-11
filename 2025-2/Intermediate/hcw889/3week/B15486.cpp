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

    vector<long long> dp(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        dp[i] = max(dp[i], dp[i - 1]);

        int end = i + t[i];
        if (end <= n + 1)
            dp[end] = max(dp[end], dp[i] + (long long)p[i]);
    }

    cout << max(dp[n], dp[n + 1]) << "\n";

    return 0;
}
