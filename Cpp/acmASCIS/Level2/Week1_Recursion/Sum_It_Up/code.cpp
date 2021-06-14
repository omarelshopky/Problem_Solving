#include<bits/stdc++.h>
using namespace std;

#define ll long long
int t, n, x[13], acc[13], summition;
bool thereIsSum;
vector<int> num;
vector<string> result;

void findSums(int index, int sum, bool taken){
    if(sum <= t && taken){
        num.push_back(x[index - 1]);
    }
    if(sum == t && taken){
        int soo  = 0;
        string ans;
        for(int i = 0; i < num.size(); i++){
            soo += num[i];
        }
        if(soo == t){
            sort(num.rbegin(), num.rend());
            thereIsSum = true;
            for(int i = 0; i < num.size(); i++){
                if(i != 0)
                    ans += '+';
                ans += to_string(num[i]);
            }
            int cnt = 0;
            for(int i = 0; i < result.size(); i++){
                if(result[i] == ans){
                    cnt = -1;
                }
            }
            if(cnt != -1) result.push_back(ans);
        }
        num.clear();
    }


    for (int i = index; i < n; i++){
        if(sum + x[i] <= t && summition - acc[i - 1] + sum >= t){
            findSums(i + 1, sum + x[i], true);
        }
        else
            findSums(i + 1, sum, false);
    }
}


int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while(true){
        result.clear();
        thereIsSum = false;
        summition  = 0;
        cin >> t >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin >> x[i];
            summition += x[i];
            acc[i] = x[i];
            if(i != 0)acc[i] += acc[i - 1];
        }
        cout << "Sums of " << t << ":\n";
        findSums(0, 0, false);
        for(int i = 0; i < result.size(); i++)
            cout << result[i] << '\n';
        if(!thereIsSum) cout << "NONE\n";
    }
}
