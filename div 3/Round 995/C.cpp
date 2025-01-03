#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(m),b(n+1,0);
    
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<k;i++){
        int t;cin>>t;
        b[t]++;
    }
    for(int i=0;i<m;i++) cout<<(n-1>k?0:(n==k?1:!b[a[i]]));
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}