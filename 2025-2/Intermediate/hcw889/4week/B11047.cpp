#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    
    int money[10];
    for (int i = 0; i < n; i++)
    {
        cin >> money[i];
    }

    int cnt = 0;


    for (int i = n - 1; i >= 0; i--)
    {
        if (k == 0)
            continue;
        if (money[i] <= k)
        {
            int temp = k / money[i];
            cnt += temp;
            k -= (temp * money[i]);
        }
    }

    cout << cnt;

    return 0;
}
