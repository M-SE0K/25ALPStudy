#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long ans = 0;
        int max = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] < max)
                ans += (long long)(max - arr[i]);
            else
                max = arr[i];
        }
        cout << ans << "\n";
    }

    return 0;
}
