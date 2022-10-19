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



int main(int argc, const char * argv[]) {
    // insert code here...
    int n,a[130],max=0,ind=0,m=0,ans=0;
    cin>>n;
    int y=pow(2,n),x=y/2;
    for(int i=0;i<y;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            ind=i;
        }
    }
    if(ind>=x){
        for(int i=0;i<x;i++){
            if(a[i]>m){
                m=a[i];
                ans=i+1;
            }
        }
    }
    else {
        for(int i=x;i<y;i++){
            if(a[i]>m){
                m=a[i];
                ans=i+1;
            }
        }
    }
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
