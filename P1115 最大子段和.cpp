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
    long long int n,a,ans=INT_MIN,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        max+=a;
        if(max>ans) ans=max;
        if(max<0)max=0;
    }
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
