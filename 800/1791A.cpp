#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int bricks = 1;
    int level = 1;
    int total_b = 1;
    while(true){
        level++;
        bricks = bricks + level;
        total_b += bricks;
        if(total_b > k){ cout << level-1; break; }

    }
    return 0;
}