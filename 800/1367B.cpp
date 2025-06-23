#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int t,a,b;

    cin >> t;
    while(t--){
        cin >> a;
        int num_e = 0;
        int num_o = 0;
        for(int i = 0; i < a; i++){
            cin >> b;
            if(b % 2 == 0){num_e++;}
            else{num_o++;}
            v.push_back(b);
        }

        // if( num_e != a/2 || num_o != a/2 ) { cout << -1 << endl; }

        int k = 0;
        for(int i = 0; i < a; i++){
            if( (i % 2 == 0 && v[i] % 2 != 0) || ( i % 2 != 0 && v[i] % 2 == 0) ) { k++; }
        }

        if(a % 2 != 0 && (num_e == a/2 + 1 && num_o == a/2)){
            cout << k/2 << endl;
        }
        else if(a % 2 == 0 && (num_e == a/2 && num_o == a/2)){
            cout << k/2 << endl;
        }
        else{ cout << -1 << endl; }

        v.clear();
    }
}