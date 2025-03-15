#include<bits/stdc++.h>
#import<iostream>
int i,n,s[10];int C(int x){for(i=0;i<10;i++)s[i]=0;for(;x;s[x%10]++,x/=10)if(s[x%10])return 1;return 0;}main(){for(std::cin>>n;C(++n););std::cout<<n;}