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
    long long int a,b,c,ans1,ans;
    cin>>a>>b>>c;
    long long int x=a*b;
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    ans1=x/a;
    long long int y=ans1*c;
    a=ans1;
    while(a!=c){
        if(a>c) a=a-c;
        else c=c-a;
    }
    ans=y/a;
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
