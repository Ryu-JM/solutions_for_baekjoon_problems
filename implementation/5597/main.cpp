#include<bits/stdc++.h>

using namespace std;

bool chk[33];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    for(int i=0;i<28;i++){
        int x;cin >> x;
        chk[x] = true;
    }
    for(int i=1;i<=30;i++){
        if(chk[i] == false)cout << i << '\n';
    }

    return 0;
}

