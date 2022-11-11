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
    int n,ans=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        ans^=x;//异或
    }
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
