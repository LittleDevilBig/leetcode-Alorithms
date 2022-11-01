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
    int n,a[10005]={0},x,t,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        cin>>t;
        while(cin>>x){
            if(x!=0)
                a[i]=max(a[x],a[i]);
            else break;
        }
        a[i]+=t;
        if(a[i]>ans)
            ans=a[i];
    }
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
