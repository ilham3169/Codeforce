#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int f = sqrt(n);
    if(f*f == n){ cout << f << " " << f << endl; return 0;}
    for(int i = 1; i <= n; i++){
        if(n%(f+i) == 0){
            cout << n/(f+i) << " " << f+i;
            return 0;
        }
        if(f+i == n) cout << 1 << " " << n << endl;
    }
}

// 64 1
// 32 2
// 16 4
// 8 8 
// 4 16
// 2 32
// 1 64
// 13 24

