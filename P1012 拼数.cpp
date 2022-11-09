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


bool cmp(string& x,string& y){
    return x+y>y+x;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    string a[25];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        cout<<a[i];
    //std::cout << "Hello, World!\n";
}
