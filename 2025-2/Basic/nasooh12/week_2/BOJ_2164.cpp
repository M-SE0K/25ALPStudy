#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    queue<int> queue;
    cin >> N;
    //맨 앞이 1이고 맨 뒤가 N인 큐 초기화
    for(int i = 1; i < N+1;i++){
        queue.push(i);
    }
    //1. 제일 위 카드 pop
    //2. 처리 후 제일 위 카드를 push 하고 pop
    while(queue.size() != 1){
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }
    cout << queue.front();

    return 0;
}