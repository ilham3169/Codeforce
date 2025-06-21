#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    if ( t-2 > 0 ){
        if ( (t-2) % 2 == 0) { cout << "YES" << endl; }
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}

// 2 2   4 
// 2 4   6
// 2 6   8

// 6 8   
