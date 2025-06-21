#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; string a;
    cin >> t;
    while(t--){
        bool flag = true;
        cin >> a;
        if( a.length() % 2 != 0 ) cout << "NO" << endl;
        else{
            for(int j = 0; j < a.length()/2; j++){
                if(a[j] != a[j+a.length()/2]){
                    flag = false;
                    break;
                }
            }
            if(flag == false){ cout << "NO" << endl; }
            else{ cout << "YES" << endl; }
        }
    }
}