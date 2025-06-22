#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; string c;
    cin >> a;
    while(a--){
        cin >> b >> c;
        int result_T = 0;
        int result_i = 0;
        int result_m = 0;
        int result_u = 0;
        int result_r = 0;

        for(int j = 0; j < 5; j++){
            if(c[j] == 'T') result_T++;
            if(c[j] == 'i') result_i++;
            if(c[j] == 'm') result_m++;
            if(c[j] == 'u') result_u++;
            if(c[j] == 'r') result_r++;
        }

        if(result_T == 1 && result_i == 1 && result_m == 1 && result_u == 1 && result_r == 1 && b == 5){
            cout << "YES" << endl;
        }
        else{ cout << "NO" << endl; }
    }
}

