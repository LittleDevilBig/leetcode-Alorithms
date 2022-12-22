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
    long long int x,y,ans=0;
    cin>>x>>y;
    long long int t=x;
    while(t){
        if(x>y) {
            ans+=4*y*(x/y);
            x%=y;
            t=x;
        }
        else{
            ans+=4*x*(y/x);
            y%=x;
            t=y;
        }
    }
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
