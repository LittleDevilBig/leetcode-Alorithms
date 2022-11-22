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

int n,a[30],vis[305]={0},ans=0;

void dfs(int line,int point,int max){ //剪枝
    if(!line && !vis[point]){
        vis[point]=1;
        ans++;
        return;
    }
    if(line<0) return;
    for(int i=1;i<=max;i++) //从大到小划
        dfs(line-i,point+i*(n-line),i);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n;
    a[0]=0;
    dfs(n,0,n);
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
