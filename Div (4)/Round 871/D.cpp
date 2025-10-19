#include<bits/stdc++.h>
using namespace std;

bool func(int n,int m){
    if(n==m) return 1;
    if(n%3!=0 || n<m) return 0;
    return func(n/3,m) || func(2*n/3,m);
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    if(func(n,m)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}