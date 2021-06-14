#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll rev(ll num){
    string s = to_string(num);
    reverse(s.begin(), s.end());
    return stoll(s, nullptr, 10);
}


int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int N;
    cin >> N;
    while(N--){
        ll p, cnt = 0;
        cin>>p;
        do{
            p += rev(p);
            cnt++;
        }while(p != rev(p));
        cout << cnt << ' ' << p << endl;
    }
}
