#include<bits/stdc++.h>
using namespace std;

int t, a, b, n;

int fab(int n){
    //base case
    if(n == 0){
        return a;
    }else if (n == 1){
        return b;
    }else if (n == 2){
        return a ^ b;
    }

    // Transition
    return fab(n % 3);
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while(t--){
        cin >> a >> b >> n;
        cout << fab(n) << '\n';
    }
}
