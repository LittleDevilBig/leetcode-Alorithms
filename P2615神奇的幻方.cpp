//
//  main.cpp
//  lugo
//
//  Created by little devil on 2022/10/9.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int a[45][45]={0};
    cin>>n;
    int x=0,y=n/2;
    a[x][y]=1;
    
    for(int k=2;k<=n*n;k++){
        if(x==0&&y!=n-1){x=n-1;y=y+1;}
        else if(y==n-1&&x!=0){y=0;x=x-1;}
        else if(x==0&&y==n-1){x=x+1;}
        else if(x!=0&&y!=n-1){
            if(a[x-1][y+1]==0){x=x-1;y=y+1;}
            else {x=x+1;}
            }
        a[x][y]=k;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<"\n";
    }
    //std::cout << "Hello, World!\n";
    return 0;
}
