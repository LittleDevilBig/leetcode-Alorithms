#include <iostream>
#include <vector>
using namespace std;

bool odd(vector<int> b){
    return b.back()%2;
}

void erase0(vector<int>& b){
    while(b[0]==0&&b.size()>1) b.erase(b.begin());
}

void minus1(vector<int>& b){
    for(int i=b.size()-1;i>=0;i--){
        if(b[i]>0){
            b[i]-=1;
            erase0(b);
            return;
        }
        else b[i]=9;
    }
}

void divide2(vector<int>& b){
    int x=0;
    for(int i=0;i<b.size();i++){
        int temp=x+b[i];
        if(temp%2) x=10;
        else x=0;
        b[i]=temp/2;
    }
    erase0(b);
}

int main(){
    long long a,ans=1;
    string s;
    vector<int> b;
    cin>>a>>s;
    for(int i=1;i<s.length()-1;i+=2) b.push_back(s[i] - '0');
    while(b[0]!=0||b.size()!=1){
        if (odd(b)) {
            ans=ans*a%1337;
            minus1(b);
        }
        if(b[0]!=0){
            divide2(b);
            a=a*a%1337;
        }
    }
    cout << ans << endl;
    return 0;
}