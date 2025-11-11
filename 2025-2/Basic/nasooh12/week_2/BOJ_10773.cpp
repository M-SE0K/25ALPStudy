/*
basic 백준 10773
문제 푼 사람 : 이수형 / nasooh12

0 입력 시 undo 기능
*/

#include <iostream>
#include <stack>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> moneyStack;
    int k, inputNum;
    int result=0;
    cin >> k;
    //k만큼 입력받고 stack에 push 하는 과정
    for (int i = 0;i < k;i++){
        cin >> inputNum;
        //input : 0 <- undo
        if (inputNum == 0){
            if(moneyStack.empty() == false){
                moneyStack.pop();
            }
        }
        //push
        else{
            moneyStack.push(inputNum);
        }
    }

    //stack 내 data를 모두 합치는 과정
    while(!moneyStack.empty()){
        result = result + moneyStack.top();
        moneyStack.pop();
    }

    cout << result;

    return 0;
}