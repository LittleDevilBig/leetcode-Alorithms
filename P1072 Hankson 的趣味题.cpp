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

int gcd(int x, int y) {
    if (x == 0)return y;
    return gcd(y % x, x);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    long long int n;
    cin>>n;
    while(n--){
        long long int a0,a1,b0,b1,ans=0;
        cin>>a0>>a1>>b0>>b1;
        long long int i=1;
        for(;i*i<=b1;i++){
            if(b1%i==0){
                if(i%a1==0){
                    if((a1==gcd(a0,i))&&(i*b0==gcd(i,b0)*b1))
                        ans++;
                }
                int y=b1/i;
                if(y%a1==0){
                    if((a1==gcd(a0,y))&&(y*b0==gcd(y,b0)*b1))
                        ans++;
                }
            }
        }
        i--;
        if(i*i==b1 && i%a1==0 && (a1==gcd(a0,i))&&(i*b0==gcd(i,b0)*b1))  ans--;
        cout<<ans<<endl;
    }
    //std::cout << "Hello, World!\n";
}
