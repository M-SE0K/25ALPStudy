#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int P[550][550];
bool vis[550][550];

int cnt=0;
int maxS=-1;
int BFS(int sx, int sy, int N, int M){
    queue<pair<int, int> > Q;
    int dx[4]={1, 0, -1, 0};
    int dy[4]={0, 1, 0, -1};
    int size=0;
    vis[sx][sy]=1;
    Q.push(make_pair(sx, sy));
    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop(); size++;
        for(int d =0; d<4; d++){
            int nx=cur.first + dx[d];
            int ny=cur.second + dy[d];
            if(nx<0||nx>=N||ny<0||ny>=M){continue;}
            if(vis[nx][ny]||P[nx][ny] !=1){continue;}
            vis[nx][ny]=1;
            Q.push(make_pair(nx, ny));
        }
    }
    cnt++;
    return size;
}



int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>P[i][j];
        }
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if (vis[i][j]==0&&P[i][j]==1){
                int cs = BFS(i, j, m, n);
                if(cs>=maxS){maxS=cs;}
            }
        }
    }

    cout<<cnt<<"\n";
    if(cnt==0) {
        cout<<0<<"\n"; return 0;
    }
    cout<<maxS<<"\n";

    return 0;
}
