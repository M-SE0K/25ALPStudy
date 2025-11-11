#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int coin = 0;
    while(k != 0){
        if (k < arr[--n]) continue;
        
        coin += (k / arr[n]);
        k -= ((k / arr[n]) * arr[n]);

    }

    cout << coin << '\n';
}