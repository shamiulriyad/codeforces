#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        string str1, str2;
        cin >> str1 >> str2;

        swap(str1[0],str2[0]);

        cout << str1 << ' '<< str2 << endl;
    }
    return 0;
}