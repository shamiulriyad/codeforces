#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
double x,y,z;
cin>>x>>y>>z;
int a=ceil(x/z);
cout << a << endl;
int b=ceil(y/z);
cout << b << endl;
cout<<max(2*a-1,2*b)<<endl;
}
}