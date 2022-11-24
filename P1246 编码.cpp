//
//  main.cpp
//  lugo
//
//  Created by little devil on 2022/10/9.
//

#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

int C(int x, int y) {
    int ans = 1;
    for (int i = 0; i < y; ++i)
        ans *= x - i;
    for (int i = 0; i < y; ++i)
        ans /= y - i;
    return ans;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    string s;
    cin>>s;
    int len=s.length(),ans=0,max=-1;
    for(int i=1;i<len;i++){
        ans+=C(26,i);
    }
    for(int i=0;i<len;i++){
        if(max>=s[i]-'a'){
            cout<<0<<endl;
            exit(0);
        }
        for(int j=max+1;j<s[i]-'a';j++)//从max+1到s[i]-1
            ans+=C(25-j,len-i-1);
        max=s[i]-'a';
        
    }
    cout<<ans+1;
    //std::cout << "Hello, World!\n";
}
