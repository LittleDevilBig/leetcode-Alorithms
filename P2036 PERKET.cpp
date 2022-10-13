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

int n,s[15],b[15];
long long int ans=LLONG_MAX;
void f(int i,long long int x,long long int y){
    if(i==n) return;
    long long int temp=abs(x*s[i]-y-b[i]);
    if(ans>temp)
        ans=temp;
    f(i+1,x*s[i],y+b[i]);
    f(i+1,x,y);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>b[i];
    }
    f(0,1,0);
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
