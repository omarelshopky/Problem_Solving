#include<bits/stdc++.h>
using namespace std;

#define ll long long
int t, n, a[105], d[105], cnt;

void makeTree(int index, int vertix){
    //cout << a[index] << ' '<< vertix <<  '\n';
    cnt = 0;
    for(int i = 0; i < n; i++){
        if(d[i] != -1)
            cnt++;
    }
    if(cnt == n) return;

    d[index] = vertix;

    int mx = 0, inx = 0;
    for(int i = index - 1; i >= 0; i--){
        if(d[i] != -1)
            break;
        if(mx < a[i]){
            mx = a[i];
            inx = i;
        }
        //cout << "m\n";
    }
    if(d[inx] == -1)
        makeTree(inx, vertix+1);

    mx = 0, inx = 0;
    for(int i = index + 1; i < n; i++){
        if(d[i] != -1)
            break;
        if(mx < a[i]){
            mx = a[i];
            inx = i;
        }
        //cout << "o\n";
    }
    if(d[inx] == -1)
        makeTree(inx, vertix+1);

}


int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while(t--){
        memset(d, -1, sizeof d);
        cin >> n;
        cnt = 0;
        int mx = 0, inx = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(mx < a[i]){
                mx = a[i];
                inx = i;
            }
        }
        makeTree(inx, 0);
        for(int i = 0; i < n - 1; i++)
            cout<< d[i] << ' ';
        cout << d[n - 1] << '\n';
    }
}
