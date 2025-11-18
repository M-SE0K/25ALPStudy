#include <iostream>
#include <cmath>
using namespace std;

int a, c;

long long power(long long exponent){
    //기저 사례 : 재귀 함수나 알고리즘에서 더 이상 분할할 수 없는 가장 기본적인 조건을 의미
    if (exponent == 1)   return a % c;

    long long temp = power(exponent / 2);
    if (exponent % 2 == 0)  return (temp * temp) % c;
    else                    return ((temp * temp) % c * a) % c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int b;
    cin >> a >> b >> c;
    
    cout << power(b) << '\n';
}