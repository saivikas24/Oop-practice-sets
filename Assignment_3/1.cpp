// Problem: Find any pair of numbers that add up to the target using a map.

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> a = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int,int> mp;

    for(int x : a) {
        int need = target - x;

        if(mp.count(need)) {
            cout << x << " " << need;
            return 0;
        }

        mp[x] = 1;
    }

    cout << "No pair";
    return 0;
}
