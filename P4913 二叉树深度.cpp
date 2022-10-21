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
using namespace std;

struct Node{
    int l=0;
    int r=0;
}p[100005];

int n,ans=0;

void f(int i,int dep){
    if (dep>ans) ans=dep;
    if(p[i].l)
        f(p[i].l,dep+1);
    if(p[i].r)
        f(p[i].r,dep+1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n;
    for(int i=1;i<n;i++)
        cin>>p[i].l>>p[i].r;
    f(1,1);
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
