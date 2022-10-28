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

int n,a[15],vis[15]={0};

void f(int x){
    if(x==n+1){
        for(int i=1;i<=n;i++)
            cout<<"    "<<a[i];
        cout<<endl;
        return;
    }
    for(int j=1;j<=n;j++){
        if(vis[j]==0){
            a[x]=j;
            vis[j]=1;
            f(x+1);
            vis[j]=0;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n;
    f(1);
    //std::cout << "Hello, World!\n";
}
