//
//  main.cpp
//  lugo
//
//  Created by little devil on 2022/10/9.
//

#include <iostream>
#include <cstring>
using namespace std;

int s[4], ans = 0, tot[4] = {0};
int a[4][25], dp[25][700] = {0};

int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i=0;i<4;i++)
        cin>>s[i];
    for(int i=0;i<4;i++){
        for(int j=1;j<=s[i];j++){
            cin>>a[i][j];
            tot[i]+=a[i][j];
        }
    }
    for(int i=0;i<4;i++){
        int y=tot[i]/2;
        for(int j=1;j<=s[i];j++){
            for(int k=1;k<=y;k++){
                if(a[i][j]<=k)
                    dp[j][k]=max(dp[j-1][k],dp[j-1][k-a[i][j]]+a[i][j]);
                else
                    dp[j][k]=dp[j-1][k];
            }
        }
        ans+=tot[i]-dp[s[i]][y];
        memset(dp, 0, sizeof(dp));
    }
    cout<<ans;
    //std::cout << "Hello, World!\n";
    
}
