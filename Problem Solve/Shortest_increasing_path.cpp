#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
	int x,y;cin>>x>>y;
	if(x==y  || abs(x-y)==1 && x>y || y==1)cout<<-1<<endl;
	else
	{
	if(x>y)cout<<3<<endl;
	else cout<<2<<endl;
	}

	}
}


