#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h,sum;
    sum =0;
    cin >> n >> h;
    vector<int> v(n);    
    for (int i = 0; i < n; ++i) { 
        cin >> v[i];
         if (v[i] > h)sum += 2; 
         else sum += 1;
    }
   

    
        
        
    
    cout << sum<< endl;

    return 0;
}
