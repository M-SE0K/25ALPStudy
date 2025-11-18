#include <iostream>


using namespace std;

int board[2205][2205] = {};
int answer[3] = {};

bool check(int x, int y, int size){
    int start = board[x][y];

    for (int i = x; i < x + size; i++)
        for (int j = y; j < y + size; j++)
            if (board[i][j] != start)
                return false; 

    return true;
}
void divide(int x, int y, int size){
    if (check(x, y, size)){
        int temp = board[x][y];
        answer[temp + 1]++;

        return;
    }

    int next = size / 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            divide(x + (i * next), y + (j * next), next);
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    divide(0, 0, n);

    for (int i = 0; i < 3; i++)
        cout << answer[i] << '\n';
}