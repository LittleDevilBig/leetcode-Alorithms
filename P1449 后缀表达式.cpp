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
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    string s;
    stack<int> a;
    int temp=0,x,y;
    cin>>s;
    for(int i=0;s[i]!='@';i++){
        if(s[i]=='+'){
            x=a.top();
            a.pop();
            y=a.top();
            a.pop();
            a.push(x+y);
        }
        else if(s[i]=='-'){
            x=a.top();
            a.pop();
            y=a.top();
            a.pop();
            a.push(y-x);
        }
        else if(s[i]=='*'){
            x=a.top();
            a.pop();
            y=a.top();
            a.pop();
            a.push(x*y);
        }
        else if(s[i]=='/'){
            x=a.top();
            a.pop();
            y=a.top();
            a.pop();
            a.push(y/x);
        }
        else {
            if(s[i]=='.'){
                a.push(temp);
                temp=0;
            }
            else{
                int b=s[i]-'0';
                temp=temp*10+b;
            }
        }
    }
    cout<<a.top();
    //std::cout << "Hello, World!\n";
}
