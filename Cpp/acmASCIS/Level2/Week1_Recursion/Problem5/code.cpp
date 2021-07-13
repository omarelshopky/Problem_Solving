#include<bits/stdc++.h>
using namespace std;

int t, n, k, w[105];
vector <int> ans;

void collectObj(int sum, int nObj, int index){
    if(sum == k){
        ans.push_back(nObj);
        return;
    }
    else if(sum > k || (sum < k && index == n)){
        return;
    }


    collectObj(sum + w[index], nObj+1, index+1);

    collectObj(sum, nObj, index+1);
}

int main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++) cin >> w[i];

        ans.clear();
        collectObj(0, 0, 0);

        if(ans.size() == 0){
            cout << "impossible\n";
        }else{
            sort(ans.begin(), ans.end());
            cout << ans[0] << '\n';
        }
    }
}
