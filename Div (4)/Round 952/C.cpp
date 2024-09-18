#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long s;
    int t,n,a,m,c;
    
    cin >>t;
    while (t--)
    {
        /* code */
        c=m=0,s=0;
        cin >> n;
        while (n--)
        {
            /* code */
            cin >> a;
            s+=a;
            if(a>m)m=a;
            if(m<<1==s)c++;
        }
        cout << c << '\n';
    }    
}