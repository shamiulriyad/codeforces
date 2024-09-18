#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        /* code */
        int n1, n2, b1, b2;
        cin >> n1 >> n2 >> b1 >> b2;
        int sunwin =0;
        int curr1=0 , curr2=0;
        
        //n1 and b1
        if(n1 > b1){
            curr1++;
        }
        else{
            curr2++;
        }
        if(n2 > b2){
            curr1++;
        }
        else{
            curr2++;
        }
        if(curr1 > curr2){
            sunwin++;
        }
        curr1=0;
        curr2=0;
        // n1 and b2
        if(n1>b2){
            curr1++;
        }
        else{
            curr2++;
        }
        if(n2 > b1 ){
            curr1++;
        }
        else {
            curr2++;
        }

    if(curr1 > curr2){
        sunwin++;
    }
         curr1=0;
         curr2=0;
        // n2 and b1
        if(n2 > b1){
            curr1++;
        }
        else{
            curr2++;
        }
        if(n1 > b2){
            curr1++;
        }
        else{
            curr2++;
        }
        if(curr1 > curr2){
            sunwin++;
        }
        curr1=0;
        curr2=0;
        //n2 and b2
        if(n2>b2){
            curr1++;
        }
        else{
            curr2++;
        }
        if(n1 > b1 ){
            curr1++;
        }
        else {
            curr2++;
        }

    if(curr1 > curr2){
        sunwin++;
    }
    cout << sunwin << endl;
        
    }
    
}