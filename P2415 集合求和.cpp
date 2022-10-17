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
    int a[35],i=0;
    long long int ans=0;
    while(cin>>a[i]){
        ans+=a[i];
        i++;
    }
    ans*=pow(2,i-1);
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
