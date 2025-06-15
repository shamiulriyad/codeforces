#include<iostream>

#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;


    while(t--){
            int n;
    cin >> n;
    int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(arr[0] == arr[n-1]){
            std :: cout<< "NO" << std :: endl;
        }
        else{
            string ans = "";
            std:: cout << "YES" <<std ::endl;
            for(int i=0; i<n; i++){
                if(i==1){
                    ans+= 'B';
                }
                else{
                    ans += 'R';
                }
            }
            std :: cout << ans <<std:: endl;
    }

}
     return 0;
}
