#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n, x;
  // n 입력 받는다.
  cin >> n;
  // n개 짜리 수열 입력 받는다.
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // 수열 정렬한다.
  sort(arr.begin(), arr.end());
  // x 입력 받는다.
  cin >> x;
  // 두 포인터로 접근해보자
  // 왼쪽은 0부터 오른쪽은 n-1부터
  // 1. 더해서 x 보다 작으면 왼쪽을 오른쪽으로 한칸 옮긴다.
  // 2. 더해서 x 보다 크거나 같으면 오른쪽을 왼쪽으로 한칸 옮긴다.
  // 3. 같으면 개수 증가시키고 양쪽 포인터 한칸씩 옮긴다.
  long long count = 0;
  int left = 0, right = n - 1;
  while (left < right) {
    long long sum = static_cast<long long>(arr[left]) + arr[right];
    if (sum == x) {
      count++;
      left++;
      right--;
    } else if (sum < x) {
      left++;
    } else {
      right--;
    }
  }
  // 개수 출력한다.
  cout << count << "\n";
  return 0;
}