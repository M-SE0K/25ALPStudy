#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, sum = 0;
    cin >> k;

    stack<int> st;
    while(k--){
        int x;
        cin >> x;
        
        if(x == 0) {
            st.pop();
        }
        else{
            st.push(x);
        }
    }

    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    cout << sum;
    return 0;
}
