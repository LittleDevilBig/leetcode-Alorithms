#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
int target;
bool iss=true;

int search(int s,int e){
    if(e-s<2){
        if(iss){
            if(a[s]==target) return s;
            if(a[e]==target) return e;
            return -1;
        }
        if(a[e]==target) return e;
        if(a[s]==target) return s;
        return -1;
    }
    if(s>e) return -1;
    int mid=(s+e)/2;
    if(a[mid]>target) return search(s,mid-1);
    if(a[mid]<target) return search(mid+1,e);
    if(iss) return search(s,mid);
    else return search(mid,e);
}

int main(){
    int n,m,s,e;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int t;  
        cin>>t;
        a.push_back(t);
    }
    while(m--){
        cin>>target;
        iss=true;
        s=search(0,n-1);
        iss=false;
        e=search(0,n-1);
        cout<<s<<" "<<e<<endl;
    }

}
