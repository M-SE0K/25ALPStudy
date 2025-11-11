#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin>>N>>M;
    int Maze[105][105];
    int distance[105][105];
    string Num;
    for(int i=0; i<N; i++){
        cin>>Num;
        for(int j=0; j<M; j++){
            Maze[i][j]=Num[j]-'0';
            distance[i][j]=-1;
        }
    }

    int dx[4]={1, 0, -1, 0};
    int dy[4]={0, 1, 0 , -1};
    queue<pair<int, int> > Q;
    distance[0][0]=0;
    Q.push(make_pair(0,0));
    while(!Q.empty()){
        pair<int, int> cur;
        cur = Q.front();
        Q.pop();
        for(int d=0; d<4; d++){
            int nx = cur.first + dx[d];
            int ny = cur.second + dy[d];
            if(nx<0||nx>=N||ny<0||ny>=M){
                continue;
            }
            if(distance[nx][ny]>=0||Maze[nx][ny]!=1){
                continue;
            }
            distance[nx][ny]=distance[cur.first][cur.second]+1;
            Q.push(make_pair(nx,ny));
        }

    }

    cout<<distance[N-1][M-1]+1<<"\n";
    return 0;
}
