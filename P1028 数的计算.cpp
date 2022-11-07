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

int n,a[1005]={1};


int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n;
    for(int j=1;j<=n;j++)
        for(int i=0;i<=j/2;i++)//+1变成+a[0]
            a[j]+=a[i];
    cout<<a[n];
    //std::cout << "Hello, World!\n";
}
