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
    int n,k,r[1000005],c[1000005];
    long long int x=1,y=1,ans=0;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cin>>r[i]>>c[i];
    }
    sort(r,r+k);
    sort(c,c+k);
    if(k>1){
        for(int i=1;i<k;i++){
            if(r[i-1]!=r[i]) x++;
            if(c[i-1]!=c[i]) y++;
        }
    }
    ans+=n*x+y*(n-x);
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
