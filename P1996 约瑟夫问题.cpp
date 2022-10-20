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

int n,m,a[105];

void f(int *p){
    int s=0,i,b,j,final=0;
    for(j=0;j<n;j++)
        if(a[j]!=0){
            s++;
            final=j;
        }
    if(s==1)
        cout<<a[final];
    else {
        for(i=0;i<m;i++){
            if(p+i>=a+n)
                p-=n;
            if(p[i]==0){
                i--;
                p++;
                continue;
            }
            if(i==m-1){
                cout<<p[i];
                cout<<" ";
                p[i]=0;
                break;
            }
        }
        for(b=1;b<n;b++){
            if(p+i+b>=a+n)
                p-=n;
            if(p[i+b]>0)
                break;
        }
        f(p+i+b);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n>>m;
    for(int i=0;i<n;i++)
        a[i]=i+1;
    f(a);
    //std::cout << "Hello, World!\n";
}
