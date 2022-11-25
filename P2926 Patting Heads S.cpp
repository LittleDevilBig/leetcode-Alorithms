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

int n,a[1000005],b[1000005]={0},maxx=0,c[1000005]={0};
bool flag[1000005]={false};

int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        maxx=max(maxx,a[i]);
        c[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(!flag[a[i]]){
            for(int j=a[i];j<=maxx;j+=a[i])
                b[j]+=1*c[a[i]];
            flag[a[i]]=true;
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[a[i]]-1<<endl;
    }
    //std::cout << "Hello, World!\n";
}
