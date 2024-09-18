#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string str1, str2;
        cin >> str1 >> str2;
        int p=0, len= str2.size();
        for(int i=1;i<=str1.size();i++){
            str2+="a";
        }
        for(int i=0;i<str1.size();i++){
            if(str1[i]=='?' || str1[i] == str2[p]){
                str1[i]=str2[p];
                p++;
            }
            
        }
        if(p>len){
                cout << "YES\n" << str1 <<"\n";
            }
            else{
                cout << "NO\n";
            }



    }
}