#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    while(k){
        n=(n%10)?(n-1):(n/10);
        k--;
    }
    cout << n;
}