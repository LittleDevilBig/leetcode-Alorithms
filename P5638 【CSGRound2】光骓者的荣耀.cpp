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


long long int n,k,a[1000005],ans=0,sum=0,maxx=0;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        ans+=a[i];
        if(i<k) {sum+=a[i];maxx=sum;}
        else if((sum=(sum+a[i]-a[i-k]))>maxx)
            maxx=sum;
    }
    ans-=maxx;
    cout<<ans;
    //std::cout << "Hello, World!\n";
}
