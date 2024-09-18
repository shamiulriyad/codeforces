#include<bits/stdc++.h>
using namespace std;
int t;
string s;

int main(){
  cin>>t;
  while(t--)
  	cin>>s,puts(s=="bca"||s=="cab"?"No":"Yes");
  return 0;
}
