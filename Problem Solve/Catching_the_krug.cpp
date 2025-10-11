#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,sx,sy,ex,ey;
    cin>>n>>sx>>sy>>ex>>ey;
    cout<<max(abs(ex-(sx==ex?ex:sx<ex?0:n)),abs(ey-(sy==ey?ey:sy<ey?0:n)))<<'\n';
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}