//
//  main.cpp
//  lugo
//
//  Created by little devil on 2022/10/9.
//

#include <iostream>
#include <cstring>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int n,dp[20]={0};
    cin>>n;
    dp[0]=1;
    for(int j=1;j<=n;j++)
        for(int i=0;i<j;i++)
            dp[j]+=dp[j-1-i]*dp[i];
    cout<<dp[n];
    //std::cout << "Hello, World!\n";
    
}
