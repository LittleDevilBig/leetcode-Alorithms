//
//  main.cpp
//  lugo
//
//  Created by little devil on 2022/10/9.
//

#include <iostream>
using namespace std;

int choose1(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[j][n-1-i]) {}
            else return 0;
    return 1;
}

int choose2(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[n-1-i][n-1-j]) {}
            else return 0;
    return 2;
}

int choose3(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[n-1-j][i]) {}
            else return 0;
    return 3;
}

int choose4(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[i][n-1-j]) {}
            else return 0;
    return 4;
}

int choose51(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[n-1-j][n-1-i]) {}
            else return 0;
    return 5;
}

int choose52(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[n-1-i][j]) {}
            else return 0;
    return 5;
}

int choose53(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[j][i]) {}
            else return 0;
    return 5;
}

int choose6(char(*a)[15],char(*b)[15],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[i][j]) {}
            else return 0;
    return 6;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    char a[15][15],b[15][15];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    int ans=0;
    ans=choose1(a,b,n);
    if(ans) {cout<<ans;return 0;}
    ans=choose2(a,b,n);
    if(ans) {cout<<ans;return 0;}
    ans=choose3(a,b,n);
    if(ans) {cout<<ans;return 0;}
    ans=choose4(a,b,n);
    if(ans) {cout<<ans;return 0;}
    ans=choose51(a,b,n);
    if(ans) {cout<<ans;return 0;}
    ans=choose52(a,b,n);
    if(ans) {cout<<ans;return 0;}
    ans=choose53(a,b,n);
    if(ans) {cout<<ans;return 0;}
    ans=choose6(a,b,n);
    if(ans) {cout<<ans;return 0;}
    else {cout<<7;return 0;}
    //std::cout << "Hello, World!\n";
    
}
