#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
int t , n ;
cin>> t ;
while (t--)
{
    
cin>> n ;
long long a[n] ;
for (int i = 0; i < n; i++)
{
       cin>> a[i] ; 
}
sort( a , a +n) ;
if (a[n-2] == a[n-1] ){
    cout<< "SQUARE\n" ;
}else {
    cout<< "TRIANGLE\n" ;
}
 
}
}