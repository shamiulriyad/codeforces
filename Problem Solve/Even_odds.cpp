#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long add=(n+1)/2;
    if(k<=add){
        cout<< (2*k-1) << endl;
    }
    else {
        k-=add;
        cout << (2 * k) << endl;
    }
}