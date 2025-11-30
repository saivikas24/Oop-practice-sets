// Problem: Find the k most frequent numbers using map and priority queue.

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> a = {1,1,1,2,2,3};
    int k = 2;

    unordered_map<int,int> mp;
    for(int x : a)
        mp[x]++;

    priority_queue<pair<int,int>> pq;

    for(auto p : mp)
        pq.push({p.second, p.first});
 
    while(k--) {
        cout << pq.top().second << " ";
        pq.pop();
    }

    return 0;
}
