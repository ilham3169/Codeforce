#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 

    int n;
    while(t--){
        cin >> n;
        if( n % 2 == 0 ){ cout << n/2 << endl; }
        else{
            for(int i = n-2; i >= 1; i--){
                if( (n-1) % i == 0  ) { cout << i << endl; break;}
            }
        }

    }
}