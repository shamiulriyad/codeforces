#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;
    
    int c = 0;
    for(auto i : s) c += (i == '4' || i == '7');
   
    cout << ((c == 4 || c == 7) ? "YES" : "NO");

    return 0;
}
