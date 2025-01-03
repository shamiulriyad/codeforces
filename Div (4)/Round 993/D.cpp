#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n+1]={0};
int b[n+1]={0};
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(!b[a[i]]){
        cout<<a[i]<<" ";
        b[a[i]]=1;
    }
} 
for(int i=1;i<=n;i++){
if(b[i]!=1){
    cout<<i<<" ";
}
}
}
return 0;
}