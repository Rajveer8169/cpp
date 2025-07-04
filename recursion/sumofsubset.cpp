class Solution {
public:
vector<vector<int>> ans;

void helper(vector<int> candidates , int target , int tempsum , vector<int> temp , int i){
    if(tempsum > target){
        return;
    }

if (i>=candidates.size()){
    if(tempsum==target){
        ans.push_back(temp);
        return;
    }
return;
}
tempsum = tempsum + candidates[i];
temp.push_back(candidates[i]);
helper(candidates , target , tempsum , temp , i);
tempsum = tempsum - candidates[i];
temp.pop_back();
helper(candidates , target , tempsum , temp , i+1);
return;
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates , target , 0 , temp , 0);
        return ans;
    }
};
