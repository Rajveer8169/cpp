#include <iostream>
#include <vector>
using namespace std;

vector<int> array = {2, 3, 6, 7};
int target = 8;

void helper(vector<vector<int>> &subset, vector<int> temp, int i) {
    int sum = 0;
    for (int num : temp) {
        sum += num;
    }

    if (sum == target) {
        subset.push_back(temp);
        return;
    } else if (sum > target) {
        return;
    } else if (i == array.size()) {
        return;
    }

    for (int j = 0; j < array.size(); j++) {
        temp.push_back(array[j]);
        helper(subset, temp, j );
        temp.pop_back();
    }
}

int main() {
    vector<vector<int>> subset;
    vector<int> temp;
    helper(subset, temp, 0);

    for (const auto& subsets : subset) {
        cout << "{ ";
        for (int num : subsets) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
