#include <iostream>
using namespace std;

long long ans[205][205], A[205][205];

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++) cin >> A[i][j];
    for (int i = n - 1; i >= 0; i--)
        for (int j = 0; j <= i; j++)
            ans[i][j] = A[i][j] + min(ans[i + 1][j], ans[i + 1][j + 1]);
    cout << ans[0][0] << endl;
}
