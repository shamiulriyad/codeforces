#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
            int n;
    cin >> n;
        string str1, str2;
        for(int i=0; i<n; i++){
            if(i%2==0){
                str1+="##";
                str2+="..";
            }
            else{
                str1+="..";
                str2+="##";
            }
        }
        str1+="\n"+str1;
        str2+="\n"+str2;
        for(int i=0; i<n; i++){
            if(i%2==0)
                cout << str1 << endl;
            else cout << str2 << endl;
        }
    }
    return 0;
}