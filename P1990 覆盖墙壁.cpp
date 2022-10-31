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
    int n,f[1000005]={0},a[1000005]={0};
    cin>>n;
    f[1]=1;
    f[2]=2;
    a[1]=0;
    a[2]=1;
    for(int i=3;i<=n;i++){
        f[i]=(f[i-1]+2*a[i-1]+f[i-2])%10000;
        a[i]=(f[i-2]+a[i-1])%10000;
    }
    cout<<f[n]%10000;
    //std::cout << "Hello, World!\n";
}
