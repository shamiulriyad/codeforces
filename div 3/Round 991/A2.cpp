#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int current_length = 0, count = 0;
        for (int i = 0; i < words.size(); i++) {
            if (current_length + words[i].length() <= m) {
                current_length += words[i].length();
                count++;
            } else {
                break;
            }
        }

        cout << count << endl; 
    }

    return 0;
}

                                    // java //
/*
import java.util.Scanner;

public class Solution{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int length = 0;
        int test = input.nextInt();
        for(int i=1; i <= test; i++){
            int count = 0;
            int n = input.nextInt();
            int m = input.nextInt();
            for(int j = 0; j<n; j++){
                String s = input.next();
                length += s.length();
                if(length <= m) count++;
                else length+=s.length();
            }
            System.out.println(count);
        }
    }
}
*/
