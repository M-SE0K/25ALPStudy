#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int N ; //명령어 수
    string op; //명령어 
    deque<int> deq;
    cin >> N;
    
    while (N--)
    {
        cin >> op;
        if(op == "push_back"){
            int num;
            cin >> num;
            deq.push_back(num);
        }
        else if(op == "push_front"){
            int num;
            cin >> num;
            deq.push_front(num);
        }
        else if(op == "pop_front"){
            if(!deq.empty()){
                cout << deq.front()<< "\n";
                deq.pop_front();
            }
            else{
                cout << "-1\n";
            }
        }
        else if(op == "pop_back"){
            if(!deq.empty()){
                cout << deq.back()<< "\n";
                deq.pop_back();
            }
            else{
                cout << "-1\n";
            }
        }
        else if(op == "size"){
            cout << deq.size()<<"\n";
        }
        else if(op == "empty"){
            cout << deq.empty()<<"\n";
        }
        else if(op == "front"){
            if(!deq.empty()){
                cout << deq.front() << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
        else if(op == "back"){
            if(!deq.empty()){
                cout << deq.back() << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
    }

    return 0;
}