#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int maxm=0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            maxm=max(maxm, a);
        }
        cout<<maxm<<"\n";
    }
}