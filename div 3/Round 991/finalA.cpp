#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<string>word(n);
        for(int i=0; i<n; i++){
            cin >> word[i];
        }
        int x=0;
        for(int i=0; i<n;i++){
            if(word[i].size() <= m){
                x+=word[i].size();
                x++;
            }
            else{
                break;
            }

        }
        cout << x << endl;


    }
    
}