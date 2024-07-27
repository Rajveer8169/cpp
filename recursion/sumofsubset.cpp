#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int>set , int target , vector<vector<int>>& subset , vector<int>current , int i)
{
    if (i==set.size())
    {
        return ;
    }
    current.push_back(set[i]);
    int sum=0;
    for(int num : current)
    {
        sum = sum + num;
    }
    if (sum==target)
    {
        subset.push_back(current);
    }
    helper(set,target,subset,current,i+1);
    current.pop_back();
      int sums=0;
    for(int num : current)
    {
        sums = sums + num;
    }
    if (sums==target)
    {
        subset.push_back(current);
    }
     helper(set,target,subset,current,i+1);
     return;
}

int main()
{
    vector<int>set={3,34,4,12,5,2};
    vector<vector<int>>subset;
    vector<int>current;
    helper(set , 9 ,subset , current , 0);
      cout << "Subsets:" << endl;
    for (const auto& subsets : subset) {
        cout << "{ ";
        for (int num : subsets) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}