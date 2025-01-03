#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int main()
{
	int t;cin>>t;
	while(t--)
	{
	cin>>n>>m>>k;
	int r1=1e9,l2=0;
	int l=m,r=m;
	for(int i=1;i<=k;i++)
	{
		int x;cin>>x;
		if(x>r1&&r1<n)r1++;
		if(x<l2&&l2>1)l2--;
		if(i==1&&x==m)r1=1,l2=n,l=0,r=n+1;
		else if(l)
		{
			if(x>=l&&x<=r&&!l2)r1=1,l2=n;
			if(x>r&&r<n)r++;
			if(x<l&&l>1)l--;
		}
	    if(!l2)cout<<r-l+1<<' ';
	    else if(l)cout<<min(l-1,r1)+r-l+1+n-max(l2,r+1)+1<<' ';
	    else cout<<min(l2-1,r1)+n-l2+1<<' ';
	}
	cout<<endl;
	}
}
