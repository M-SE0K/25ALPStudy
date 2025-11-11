#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  // n 입력 받는다.
  // n개 정수 입력 받는다.
  // v 입력 받는다.
  // n개 정수 중 v의 개수를 출력한다.
  int n, v, cnt = 0;
  vector<int> arr(n);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cin >> v;
  for (int i = 0; i < n; i++) {
    if (arr[i] == v)
      cnt++;
  }
  cout << cnt;
  return 0;
}