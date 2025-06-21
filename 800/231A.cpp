#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t; 
    vector<int>v;

    int a,b,k;

    while(t--){
        bool flag = false;
        cin >> a >> b;
        while(a--){
            cin >> k;
            if(k == b) flag = true;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}