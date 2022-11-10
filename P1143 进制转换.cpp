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
    int n,m,x;
    string s,ans;
    cin>>n>>s>>m;
    int len=s.length();
    for(int i=len-1;i>=0;i--){
        if(s[i]>='A')
            x+=(s[i]-'A'+10)*pow(n,len-1-i);
        else x+=(s[i]-'0')*pow(n,len-1-i);
    }
    while(x/m>0){
        if(x%m>9)
            ans+=char(x%m-10+'A');
        else ans+=char(x%m+'0');
        x/=m;
    }
    if(x%m>9)
        ans+=char(x%m-10+'A');
    else ans+=char(x%m+'0');
    reverse(ans.begin(),ans.end());
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
