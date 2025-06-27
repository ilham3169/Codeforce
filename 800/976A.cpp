#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; string a;
    cin >> n >> a;
    int bir = 0; int sifir = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '1') bir++;
        else sifir++;
    }    

    if(bir==0) cout << 0;
    else{
        cout << 1;
        for(int i = 0; i < sifir; i++){
            cout << 0;
        }
        cout << endl;
    }


}