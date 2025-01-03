#include<iostream>

using namespace std;
int  main ()
{
    int t ;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n,m,r,c,t;
        cin >> n >> m >> r>> c;
        long long sum;
        sum =0;
        sum = ((2*m-1)*(n-r)+(m-c));
        cout << sum << endl;


    }
    
}