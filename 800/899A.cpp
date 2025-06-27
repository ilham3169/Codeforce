#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>v;

    int bir = 0; int iki = 0;

    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 1) bir++;
        if(a == 2) iki++;
        v.push_back(a);
    }
    
    if(iki == 0 && v.size() >= 3){
        cout << v.size()/3 << endl; 
    }
    else{
        int result = 0;
        while(iki != 0 && bir > 0 ){
            iki--;
            bir--;
            result++;
        }
        if(bir >= 3){ result += bir/3; }

        cout << result;    
    }

    

}

// 1 1 1 1 1 
// 3 dene 2 
// 4 dene 1