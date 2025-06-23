#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin >> t;
    
//     while(t--){
//         int maxx = 0;
//         int total = 0;

//         int a,b;
//         bool flag = true;
//         cin >> a;
//         for(int i = 0; i < a; i++){
//             cin >> b;
//             if(b != 0){
//                 if(total >= maxx) { maxx = total; total = 0;  }
//             }
//             else {
//                 total++;
//             }
//         }
//         if(total > maxx) { maxx = total; }
//         cout << maxx << endl; 
//     }
// }

int main(){
    int t;
    vector<int>v;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a;
        for(int i = 0; i < a; i++){
            cin >> b;
            v.push_back(b);
        }

        int maxx = 0;
        int total = 0;
        for(int x : v){
            if(x == 0){
                total++;
            }
            else{
                if(total > maxx){
                    maxx = total;
                    total = 0;
                }
            }
        }
        if(total > maxx) maxx = total;
        cout << maxx << endl;
        v.clear();
    }
}