#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; // 명령의 수
    string opr; // 명령어
    queue<int> queue;

    cin >> N;
    while (N--)
    {
        cin >> opr ;
        if(opr == "push"){
            int pushNum;
            cin >> pushNum;
            queue.push(pushNum);
        }
        else if(opr == "pop"){
            if(!queue.empty()){
                cout << queue.front()<<"\n";
                queue.pop();
            }
            else{
                cout << "-1\n";
            }
        }
        else if(opr == "size"){
          cout << queue.size()<<"\n";
        }
        else if(opr == "empty"){
          cout << queue.empty()<<"\n";
        }
        else if(opr == "front"){
            if(!queue.empty()){
                cout<< queue.front()<<"\n" ;
            }
            else{
                cout << "-1\n";
            }
        }
        else if(opr == "back"){
            if(!queue.empty()){
                cout << queue.back() << "\n" ;
            }
            else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}