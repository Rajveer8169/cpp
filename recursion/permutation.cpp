#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>ans;

void printPermutation(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

void helper(vector<int>& nums , int i )
{
    if (i==nums.size())
    {
        printPermutation(nums);
        return;
    }
    for(int j=i ; j<nums.size() ; j++)
    {
        swap(nums[i],nums[j]);
        helper(nums,i+1);
        swap(nums[i],nums[j]);
    }
}

int main()
{
    vector<int>nums={1,2,3};
    helper(nums,0);
    return 0;
}