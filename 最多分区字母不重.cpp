#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


int main(){
    string s;
    cin>>s;
    vector<int> a(26,0);
    vector<int> ans;
    int maxi=0,last=0;
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']=i;
    }
    for(int i=0;i<s.length();i++){
        maxi=max(maxi,a[s[i]-'a']);
        if(maxi==i) {
            ans.push_back(i-last+1);
            last=i+1;
        }
    }
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<ans[ans.size()-1];
}
