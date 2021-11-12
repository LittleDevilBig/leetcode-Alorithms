#include <iostream>
using namespace std;


int main(){
    long long n,odd=0,even=0;
    while(cin>>n){
        odd=max(odd,even+n);
        even=odd-n;
    }
    cout<<odd;
}
