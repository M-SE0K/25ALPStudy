#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    int min = 10000;
    int weight = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] * (i + 1)) > weight)
        {
            weight = arr[i] * (i + 1);
        }
    }

    cout << weight;

    return 0;
}
