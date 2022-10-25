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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]+a[1]<=a[2])
        cout<<"Not triangle";
    else{
        if(pow(a[0],2)+pow(a[1],2)==pow(a[2],2))
            cout<<"Right triangle"<<endl;
        else if(pow(a[0],2)+pow(a[1],2)>pow(a[2],2))
            cout<<"Acute triangle"<<endl;
        else if(pow(a[0],2)+pow(a[1],2)<pow(a[2],2))
            cout<<"Obtuse triangle"<<endl;
        if(a[0]==a[1]||a[1]==a[2])
            cout<<"Isosceles triangle"<<endl;
        if(a[0]==a[1]&&a[1]==a[2])
            cout<<"Equilateral triangle";
    }
    //std::cout << "Hello, World!\n";
}
