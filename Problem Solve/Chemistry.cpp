#include <iostream>
#include <cstring>
using namespace std;
int T, n, k, a[27], ans;
string s, f;
int main(){
	cin >> T;
	while (T--){
		memset(a, 0, sizeof(a));
		cin >> n >> k >> s;
		ans = 0;
		for (int i = 0; i < n; i++)
			a[s[i] - 'a'] ^= 1;
		for (int i = 0; i < 27; i++) ans += a[i];
		f = (ans - k < 2)? "YES": "NO";
		cout << f << endl;
	}
}
