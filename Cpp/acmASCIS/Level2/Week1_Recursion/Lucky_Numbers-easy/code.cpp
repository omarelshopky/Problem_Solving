#include<bits/stdc++.h>
using namespace std;

long long n;

bool check (long long num){
    string s = to_string(num);
    int sum[2] = {0,0};
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '7')
            sum[1]++;
        else if(s[i] == '4')
            sum[0]++;
        else
            return false;
    }
    if (sum[0] == sum[1])
        return true;
    else
        return false;
}


long long lucky(long long number){
    //base
    if(number >= n){
        //cout << number << '\n';
        if(check(number)){
            return number;
        }else{
            return 100000000000;
        }
    }

    //transition
    return min(
        lucky(number * 10 + 7),
        lucky(number * 10 + 4)
    );
}


int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>> n;
    string s = to_string(n);
//    if(n <= 74 && n > 47){
//        cout << 74;
//        return 0;
//    }
    if(check(n)){
        cout << n;
    }else{
        if(s.length() % 2 == 0 && ((s[0] <= '7' && s[1] < '7') || (s[0] <= '4' && s[1] >='7'))){
            cout << lucky(0);
        }else{
            string ans = "";
            for(int i = 0; i < (s.length() + 2) / 2; i++){
                ans += "4";
            }
            for(int i = 0; i < (s.length() + 2) / 2; i++){
                ans += "7";
            }
            cout << ans;
        }
    }
}
