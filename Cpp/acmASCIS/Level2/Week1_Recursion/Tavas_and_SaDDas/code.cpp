#include<bits/stdc++.h>
using namespace std;

long long n;

int lucky(long long num, long long index){
    //base case
    if(num == n){
        return index;
    }else if (num > n){
        return -1;
    }

    //transition
    return max(
        lucky(num * 10 + 4, index * 2 + 1),
        lucky(num * 10 + 7, index * 2 + 2)
    );
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    cout << lucky(0, 0);
}
