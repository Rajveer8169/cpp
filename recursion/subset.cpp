#include <iostream>
#include <vector>

using namespace std;


void printPermutation(const vector<int>& current) {
    for (int num : current) {
        cout << num << " ";
    }
    cout << endl;
}
// Function to recursively generate all subsets
void generateSubsetsRec(const vector<int>& set, int index, vector<int>& current, vector<vector<int>>& subsets) {
    if (index == set.size()) {
       printPermutation(current);
        return;
    }
    current.push_back(set[index]);
    // Exclude the current element and proceed
    generateSubsetsRec(set, index + 1, current, subsets);
    
    // Include the current element and proceed
  current.pop_back();
    generateSubsetsRec(set, index + 1, current, subsets);
    // Backtrack to remove the current element before moving to the next step
  
}

int main() {
    // Input set
    vector<int> set = {1, 2, 3};

    // Vector to hold all subsets
    vector<vector<int>> subsets;

    // Temporary vector to store the current subset
    vector<int> current;

    // Generate subsets
    generateSubsetsRec(set, 0, current, subsets);

    // Print subsets
    cout << "Subsets:" << endl;
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
