/*           https://codeforces.com/problemset/problem/2125/B         */


#include <bits/stdc++.h>
using namespace std;

 
int main() {
	int tt;cin>>tt;
	while(tt--){
	    long long a,b,k;cin>>a>>b>>k;
	    if(max(a,b)/gcd(a,b)<=k)cout<<1<<endl;
	    else cout<<2<<endl;
	}
 
}