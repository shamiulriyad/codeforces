#include <bits/stdc++.h>
using namespace std;
int main(){int t;
cin>>t;
while(t--){
string str="codeforces";
string s;
cin>>s;
int c=0;
for(int i=0;i<10;i++)
if(s[i]!=str[i])c++;
cout<<c<<endl;
}
}