#import<bits/stdc++.h>
main(){
    char x; 
    std::set<char>e;
    while(std::cin>>x) 
    e.insert(x);
    std::cout<<(e.size()%2?"IGNORE HIM!":"CHAT WITH HER!");
    }