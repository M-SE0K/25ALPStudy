#include <iostream>

using namespace std;

int main(void) {
  // nuber 입력 받는다.
  int number;
  int result[10] = {
      0,
  };
  cin >> number;
  // 각 자리수의 숫자 개수를 샌다.
  while (number > 0) {
    int digit = number % 10;
    result[digit]++;
    number /= 10;
  }
  // 6과 9는 바꿔쓸 수 있다. (두개는 하나로 친다)
  int six_nine = result[6] + result[9];
  // 6과 9의 개수를 더해서 2로 나눈다. (홀수면 올림)
  result[6] = (six_nine + 1) / 2;
  result[9] = 0;
  // 나머지 숫자들은 그냥 개수 센다.
  // 모두 더한다.
  int max_count = 0;
  for (int i = 0; i < 10; i++) {
    if (result[i] > max_count) {
      max_count = result[i];
    }
  }
  cout << max_count << "\n";
  return 0;
}