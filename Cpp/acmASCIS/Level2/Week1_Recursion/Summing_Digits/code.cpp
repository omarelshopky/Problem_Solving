#include<bits/stdc++.h>
using namespace std;

int n;

int f(int num){
    string s = to_string(num);
    //base case
    if(s.length() == 1){
        return stoi(s);
    }

    //transition
    int x = 0;
    for(int i = 0; i < s.length(); i++){
        x += s[i] - '0';
    }
    return f(x);
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    while(n != 0){
        cout << f(n) << '\n';
        cin >> n;
    }
}
