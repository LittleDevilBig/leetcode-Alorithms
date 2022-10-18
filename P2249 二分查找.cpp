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

int n,m,a[1000005],b,ans[100005];

int main(int argc, const char * argv[]) {
    // insert code here...
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i)
        scanf("%d", a + i);
    for (int i = 0; i < m; ++i){
        ans[i]=-1;
        scanf("%d", &b);
        int s=0,e=n-1;
        for(int j=(e+s)/2;s<e;j=(e+s)/2){
            if(b>a[j])
                s=j+1;
            else e=j;
        }
        if(a[s]==b) ans[i]=s+1;
    }
    for (int i = 0; i < m; ++i)
        printf("%d ", ans[i]);
    //std::cout << "Hello, World!\n";
}
