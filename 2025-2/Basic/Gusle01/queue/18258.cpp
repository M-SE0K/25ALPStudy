#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    queue<int> q;

    while(n--){
        string op;
        cin >> op;
        if(op == "push"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(op == "pop"){
            if(q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(op == "size"){
            cout << q.size() << '\n';
        }
        else if(op == "empty"){
            cout << q.empty() << '\n';
        }
        else if(op == "front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else if(op == "back"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
    return 0;
}v
