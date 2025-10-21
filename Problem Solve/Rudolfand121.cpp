#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int f=0;
    for(int i=0;i<n-2;i++){
      if(a[i]<0)f=1;
      a[i+1]-=2*a[i];
      a[i+2]-=a[i];
      //cout<<a[i+1];
    }
    puts(f||a[n-1]!=0||a[n-2]!=0?"NO":"YES");
  }
  return 0;
}