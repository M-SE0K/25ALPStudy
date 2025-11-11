#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    queue<int> q;
    cin >> n;

    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    
    while(q.size() != 1){
        int temp;
        q.pop();
        temp = q.front();
        q.push(temp);
        q.pop();
    }
    cout << q.front();
    return 0;
}
