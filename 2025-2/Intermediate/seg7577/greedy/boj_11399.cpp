#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> p;
    for (int i = 0; i < n; i++){
        int time;
        cin >> time;

        p.push_back(time);
    }
        
    
    sort(p.begin(), p.end());

    int total = 0;
    for (int i = 1; i < n; i++)
        p[i] = p[i - 1] + p[i];

    for (int i = 0; i < n; i++){
        total += p[i];
    }
    cout << total << '\n';
}