#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> meetings(N);

    for (int i = 0; i < N; i++) {
        cin >> meetings[i].first >> meetings[i].second;
    }

    sort(meetings.begin(), meetings.end(), compare);

    int count = 0;
    int end_time = 0;

    for (auto meeting : meetings) {
        if (meeting.first >= end_time) {
            count++;
            end_time = meeting.second;
        }
    }

    cout << count << '\n';
    return 0;
}
