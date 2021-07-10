#include<bits/stdc++.h>
using namespace std;

int t, n, x[13];
bool take[13], thereIs, printed[10000000];
vector<vector<int>> ans;
vector<int> temp;

void sums(int sum, int index){
    // baseCase
    if(sum == t)
    {
        for (int i = 0; i < n; i++){
            thereIs = true;
            if (take[i]){
                temp.push_back(x[i]);
            }
        }
        ans.push_back(temp);
        temp.clear();
        return;
    }
    else if (sum > t || (sum < t && index == n)){
        return;
    }

    // Transition
    take[index] = true;
    sums(sum+x[index], index+1);
    take[index] = false;
    sums(sum, index+1);
}

int main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while(true){
        thereIs = false;
        cin >> t >> n;
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            cin >> x[i];
            take[i] = false;
        }
        sums(0, 0);

        cout << "Sums of " << t << ":\n";
        if(!thereIs) cout << "NONE\n";
        memset(printed, false, sizeof printed);

        for(int i = 0; i < ans.size(); i++){
            bool dis = true;
            for(int j = 0; j < ans.size(); j++){
                if(ans[i] == ans[j] && i != j && printed[j] == true)
                    dis = false;
            }
            if(dis){
                for(int k = 0; k < ans[i].size(); k++){
                    cout << ans[i][k];
                    if(k != ans[i].size() - 1)
                        cout << '+';
                }
                cout << '\n';
                printed[i] = true;
            }
        }
        ans.clear();
    }
}
