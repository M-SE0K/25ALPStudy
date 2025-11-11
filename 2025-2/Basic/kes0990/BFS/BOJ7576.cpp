#include <iostream>
#include <queue>
using namespace std;
    int N, M;
    int Box[1005][1005];
    int Di[1005][1005];
    int Mdi=0;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<pair<int, int> > Q;
    cin>>M>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>Box[i][j];
            if(Box[i][j]==1){
                Q.push(make_pair(i,j));
                Di[i][j]=0;
            }
            if(Box[i][j]==0){
                Di[i][j]=-1;
            }
        }
    }
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop();
        for(int d=0; d<4; d++){
            int nx=cur.first + dx[d];
            int ny=cur.second + dy[d];
            if(nx<0||nx>=N||ny<0||ny>=M) continue;
            if(Box[nx][ny]==-1||Di[nx][ny]>=0) continue;
            Di[nx][ny]=Di[cur.first][cur.second]+1;
            Q.push(make_pair(nx, ny));
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(Di[i][j]==-1){
                cout<<-1<<"\n";
                return 0;
            }

            if(Di[i][j]>Mdi){
                Mdi = Di[i][j];
            }
        }
    }

    cout<<Mdi<<"\n";

    return 0;
}
