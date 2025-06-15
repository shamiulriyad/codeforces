#include<bits/stdc++.h>

using namespace std;
int n,a,b,c,i;

int main(){
    cin >> n;
    while(i<n){
        cin >> a;
        b=max(b,a);
        c+=a;
        i++;
    }
    cout << b*n-c;

}