// Problem: Merge all overlapping intervals using sorting.

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<int,int>> v = {{1,3}, {2,6}, {8,10}, {15,18}};
    sort(v.begin(), v.end());

    vector<pair<int,int>> ans;
    ans.push_back(v[0]);

    for(int i = 1; i < v.size(); i++) {
        int s = v[i].first;
        int e = v[i].second;

        if(s <= ans.back().second)
            ans.back().second = max(ans.back().second, e);
        else
            ans.push_back(v[i]);
    }

    for(auto p : ans)
        cout << p.first << " " << p.second << endl;

    return 0;
}
