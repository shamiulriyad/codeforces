#include<bits/stdc++.h>

using namespace std;

int main (){
    
        int n,a,b,c,y=0;
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a >>b >> c;
            if(a+b+c==3 || a+b+c==2){
                y++;
            }
     }
     cout << y;
 }
