#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  // n과 k를 입력받는다.
  // pair 배열 n개를 입력받는다.
  // 학년별로 남자 수와 여자 수를 센다.
  // 각 학년별로 남자 수와 여자 수를 k로 나눈다.
  // 나머지가 있으면 방 하나를 더 추가한다.
  // 모든 학년의 방 수를 더한다.
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    v[i] = {x, y};
  }
  int ans = 0;
}