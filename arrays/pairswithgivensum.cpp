#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> findPairs(vector<int>& a, vector<int>& b, int target) {
    sort(a.begin(), a.end());               // ascending
    sort(b.begin(), b.end(), greater<int>()); // descending
    
    int i = 0, j = 0;
    vector<pair<int,int>> result;

    while (i < a.size() && j < b.size()) {
        int sum = a[i] + b[j];
        if (sum == target) {
            result.push_back({a[i], b[j]});
            i++;
            j++;
        } else if (sum < target) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 4, 5, 7};
    vector<int> b = {5, 6, 3, 4, 8};
    int target = 9;

    vector<pair<int,int>> ans = findPairs(a, b, target);
    for (auto &p : ans) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
