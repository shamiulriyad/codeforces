#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		while(n>2){
			n-=2;
			cout<<"-1 3 ";
		}
		if(n%2==1){
			cout<<"-1"<<endl;
		}else{
			cout<<"-1 2"<<endl;
		}
	}
	return 0;
}