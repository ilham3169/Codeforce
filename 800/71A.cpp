#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    string a;

    cin >> t;

    while(t--){
        cin >> a;
        if ( a.length() <= 10 ) cout << a << endl;
        else cout << a[0] << a.length()-2 << a[a.length()-1] << endl;
    }
}

// 2 2   4 
// 2 4   6
// 2 6   8

// 6 8   
