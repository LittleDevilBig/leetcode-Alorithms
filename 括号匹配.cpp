#include <iostream>
#include <string.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int cmin=0,cmax=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') cmin++,cmax++;
        if(s[i]==')') cmax--,cmin=max(cmin-1,0);
        if(s[i]=='*') cmax++,cmin=max(cmin-1,0);
        if(cmax<0) {
            cout<<"NO";
            return 0;
        }
    }
    if(cmin==0) cout<<"True";
    else cout<<"NO";
}
