#include<iostream>
using namespace std;
int main()
{
	int t,n,m,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>x>>y;
		int l=m,r=m;
		while(n-->1)
		{
			cin>>x>>y;
			l+=x;
			r+=y;
		}
		cout<<2*(l+r)<<endl;
	}
}
