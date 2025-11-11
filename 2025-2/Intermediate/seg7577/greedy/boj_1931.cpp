#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){
    if (x.second == y.second)
        return x.first < y.first;
    else
        return x.second < y.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i;
    cin >> i;

    vector<pair<int, int>> vec;
    for (int j = 0; j < i; j++){
        int start, end;
        cin >> start >> end;

        vec.push_back({start, end});
    }

    //끝나는 시간을 기준으로 오름차순, -> 회의 공간 점유율이 문제가 아닌 단순 횟수를 찾아야 되기 때문
    sort(vec.begin(), vec.end(), cmp);

    int cnt = 0; int temp = -1;
    for (int j = 0; j < i; j++){
        if (temp < 0 || temp <= vec[j].first) {
            temp = vec[j].second;
            cnt++;
        }
    }

    cout << cnt << '\n';
}