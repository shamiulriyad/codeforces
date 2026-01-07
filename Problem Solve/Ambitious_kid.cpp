#include<bits/stdc++.h>
using namespace std;
 int main(){

        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
           int min_abs = INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cout << " 0 " << endl;
                return 0;
            }
        
           
                min_abs  =  min(min_abs, abs(a[i]));
      
          
        }
     cout << min_abs << " ";
    
 }