#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n,i;
cin>>i;
while(i--){
cin >>n;
string s;
cin >> s;
sort(s.begin(),s.end());
cout << s[n-1]-97+1 <<endl;
}
return 0;
 
}