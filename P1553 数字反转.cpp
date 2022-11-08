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




int main(int argc, const char * argv[]) {
    // insert code here...
    string s,ans;
    cin>>s;
    int len=s.length();
    int i=len-1,j=0,k=0;
    bool flag=0;
    while(s[i]=='0'||s[i]=='%') i--;
    for(;i>=0;){
        if(s[i]=='.'||s[i]=='/'){
            flag=1;
            ans+=s[i--];
            j++;
            k=j;
            while(s[i]=='0') i--;
            if(i<0)ans+='0';
        }
        ans+=s[i--];
        j++;
    }
    if(ans.empty())ans+='0';
    if(flag){
        for(int i=k;i<j;i++)
            cout<<ans[i];
        cout<<ans[k-1];
        int t=k-2;
        while(ans[t]=='0')t--;
        for(int i=0;i<=t;i++)
            cout<<ans[i];
        if(k-2<0)cout<<'0';
    }
    else {
        if(s[len-1]=='%') ans+='%';
        cout<<ans;
    }
    //std::cout << "Hello, World!\n";
}
