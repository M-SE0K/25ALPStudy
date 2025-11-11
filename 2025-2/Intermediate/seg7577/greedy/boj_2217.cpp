#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> rope;
    for (int i = 0; i < n; i++){
        int number;
        cin >> number;

        rope.push_back(number);
    }
    
    sort(rope.begin(), rope.end());

    int total_max = 0;
    for (int i = 0; i < n; i++){
        int temp = rope[i] * (rope.size() - i);
        if (total_max < temp){
            total_max = temp;
        }
    }

    cout << total_max << '\n';
}