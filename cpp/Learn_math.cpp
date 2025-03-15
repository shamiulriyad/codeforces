#include<bits/stdc++.h>
using namespace std;
bool isComposite(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return true; 
    }
    return false;
}

int main(){
    int n; cin >> n;
    for(int i=4;i<n;i++){
        if(isComposite(i) && isComposite(n-i)){
            cout << i << " " << n-i << endl;
            break;
        }
    }
}
/*
another solution
#include<iostream>
main(){int n;std::cin>>n;std::cout<<n-8-n%2<<' '<<8+n%2;}

*/ 