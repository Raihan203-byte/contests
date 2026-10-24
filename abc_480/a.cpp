#include <bits/stdc++.h>
using namespace std;

char m[2][2];

bool check(){
    for(int i = 0; i < 2;i++){
        if((m[i][0] == 'A' && m[i][1] == 'D') ||(m[i][0] == 'D' && m[i][1] == 'A') )
            return true;
    }
    for(int i = 0; i < 2;i++){
        if((m[0][i] == 'A' && m[1][i] == 'D') ||(m[0][i] == 'D' && m[1][i] == 'A') )
            return true;
    }
    return false;
}

void solve(){
    for(int i = 0 ; i < 2;i++){
        for(int j = 0; j < 2;j++)
            cin>>m[i][j];
    }
   if(check())
       cout<<"Yes\n";
   else
   cout<<"No\n";
}



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
