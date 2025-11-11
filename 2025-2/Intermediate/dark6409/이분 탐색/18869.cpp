#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
우주개수 n
행성개수 m

모든 행성의 대소관계가 동일해야 함.

아니면 행성 개수만큼의 번호를 준비하고, 그걸 각 행성에 할당?
그 번호가 모두 같으면 균등한 우주인 것

일단 우주마다 그 번호로 압축해두고, 한 우주 잡고 나머지 우주를 이분탐색으로 동일한지 판별하기


정렬해두고, lower_bound 로 몇번째인지 나옴. 그걸 새로운 배열에 넣으면 댐!

*/

int n,m,cnt=0;
vector<int> v[101], w[101], ans[101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            int t;cin>>t;
            v[i].push_back(t);
            w[i].push_back(t);
        }
    }

    for(int i=0;i<n;i++){
        sort(w[i].begin(), w[i].end());   
        for(int j=0;j<m;j++){
            int idx = lower_bound(w[i].begin(), w[i].end(), v[i][j])-w[i].begin();
            ans[i].push_back(idx);
        }
    }

  /* 테스트
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout<<ans[i][j]<<' ';
        cout<<'\n';
    }
  */

    // ans[i] 안의 여러 원소를 아예 문자열 하나로 합칠까? => 그건안됨

    
    vector<int> vst;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<m;k++){
                if(ans[i][k]!=ans[j][k]) break;
                else{
                    if(k==m-1) cnt++;
                    continue;
                }
            }
            
        }
    }
    cout<<cnt;    
}
