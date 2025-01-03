#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x,y,z;
        cin >> x>> y >> z;
        int a=ceil(x/z);
        int b=ceil(y/z);
         cout<<max(2*a-1,2*b)<<endl;

    }
    
}