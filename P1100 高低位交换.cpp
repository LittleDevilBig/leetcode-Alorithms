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
    unsigned int n,ans=0,high,low;
    cin>>n;
    high=n>>16;
    low=n-(high<<16);
    ans=(low<<16)+high;
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
