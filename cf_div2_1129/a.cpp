#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0 ; i < n;i++)
        cin>>v[i];
    deque<int> q;
    sort(v.begin(),v.end());
    for(int i = 0; i < n;i++){
        q.push_back(v[i]);
    }
    int t = 0,p = 0;
    while(1){
        auto it = upper_bound(v.begin()+p,v.end(),t);
        if(it - v.begin() - p >= k){
            for(int i = 0; i < k;i++){
                q.pop_front();
            }
            p += k;
        }
        else {
        cout<<t<<'\n';
        return ;
        }
        t++;
    }
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
