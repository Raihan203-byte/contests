#include <bits/stdc++.h>
#include <string>
using namespace std;

int n,m;

vector<pair<string,int>> candidate;
vector<string> ballot;

int differ(string& a , string& b){
    int cnt = 0;
    for(int i = 0 ; i < (int)a.size();i++)
    {
        if(a.at(i) != b.at(i))
            cnt++;
    }
    return cnt;
}

void solve(){
    cin>>n>>m;
    int hold,temp,mult;
    candidate.resize(n);
    ballot.resize(m);
    for(int s = 0; s < n;s++)
    {
        cin>>candidate[s].first;
        candidate[s].second = 0;
    }
    for(int s = 0; s < m;s++)
    {
        cin>>ballot[s];
    }
    for(int i = 0 ; i < m;i++){
        hold = -1;
        mult = 0;
        for(int j = 0 ; j < n;j++){
            if(candidate[j].first.size() != ballot[i].size())
                continue;
            temp = differ(candidate[j].first, ballot[i]);
            if(temp == 0)
            {    candidate[j].second++;
                goto L;
            }
            else if(temp == 1){
               if( hold == -1)
                   hold = j;
               else{
                   mult = 1;
                   hold = -1;
               }
            }
        }
        if(mult == 0 && hold != -1)
            candidate[hold].second++;
        L:;
    }
    for(int i = 0 ; i < n;i++)
    cout<<candidate[i].second<<"\n";
}



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
