#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m;
vector<ll> v;

bool run(ll M){
    ll s=0;
    for(ll i=0;i<n;i++) {
        if(v[i]>M) s = s + v[i]-M;
    }
    
    cout<<"SUM : "<<s<<"\n";
    return s>=m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll L=0, H=2e9;

    cin>>n>>m;
    v.resize(n);
    for(auto &a:v) cin>>a;
    sort(v.begin(), v.end());

    H=v.back()*2;
  
    while(L+1<H){
        //cout<<"=== L : "<<L<<", H : "<<H<<"\n";
        ll M=(L+H)/2;
        //cout<<"Mid : "<<M<<" => ";
        if(run(M)==1) L=M; // 되면 길이 더 늘려서 해보기. 왜 +1이지?
        else H=M; // 안되면 길이 줄여
        //cout<<"L : "<<L<<", H : "<<H<<"\n\n";
        int t; cin>>t;
    }
    
    cout<<H-1;
}
