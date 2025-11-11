#include <iostream>
#include <string>

using namespace std;

int main(void) {
  // 1. string 입력 받음
  // 2. string 순회하면서 각 알파벳 개수 세기
  // 3. 알파벳 개수 출력
  string str;
  int result[26] = {
      0,
  };
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    result[str[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    cout << result[i] << " ";
  }
  return 0;
}