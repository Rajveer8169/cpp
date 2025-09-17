class Solution {
public:
vector<vector<int>> ans;

void helper(vector<int>& candidates , vector<int> temp , int target , int i , int currSum){
    if(currSum > target){
        return;
    }
    if(i==candidates.size()){
        if(currSum==target){
            ans.push_back(temp);
        }
        return;
    }

    currSum =currSum + candidates[i];
    temp.push_back(candidates[i]);
    helper(candidates , temp , target , i , currSum);
    currSum =currSum - candidates[i];
    temp.pop_back();
    helper(candidates , temp , target , i+1 , currSum);
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates , temp , target , 0 , 0);
        return ans;
    }
};
