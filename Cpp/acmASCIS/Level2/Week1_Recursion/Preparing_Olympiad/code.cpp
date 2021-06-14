#include<bits/stdc++.h>
using namespace std;

#define ll long long

int n, l, r, x, c[20], ans;
bool visit[20];

void check(int index, int sum){
    if(sum > r)
        return;
    else if (sum >= l && sum <= r){
        int mn = 100000000;
        int mx = 0;
        for(int i = 0; i < n; i++){
            if(visit[i]){
                mn = min(c[i], mn);
                mx = max(c[i], mx);
            }
        }
        if(mx - mn >= x)
            ans++;
    }


    for(int i = index + 1; i <= n; i++){
        visit[i - 1] = true;
        check(i, sum + c[i - 1]);
        visit[i - 1] = false;
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n>>l>>r>>x;
    for(int i = 0; i < n; i++){
        cin >> c[i];
        visit[i] = false;
    }
    check(0, 0);
    cout << ans;

}
