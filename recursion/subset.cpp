// User function Template for C++

class Solution {
  public:
   void subsetRecur(int i, vector<int>& arr, 
       vector<vector<int>>& res, vector<int>& subset) {
    
    // add subset at end of array
    if (i == arr.size()) {
        res.push_back(subset);
        return;
    }
    
    // include the current value and 
    // recursively find all subsets
    subset.push_back(arr[i]);
    subsetRecur(i+1, arr, res, subset);
    
    // exclude the current value and 
    // recursively find all subsets.
    subset.pop_back();
    subsetRecur(i+1, arr, res, subset);
}

vector<vector<int> > subsets(vector<int>& arr) {
    
    sort(arr.begin(),arr.end());
    vector<int> subset;
    vector<vector<int>> res;
    subsetRecur(0, arr, res, subset);
    sort(res.begin(), res.end());
    return res;
}
};
