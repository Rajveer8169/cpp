#include<iostream>
#include<vector>
using namespace std;
vector<int> helper(int arr[], int n)
{
    vector<int>ans;
    for (int i=0 ; i<n ; i++)
    {
        int index = arr[i]%n;
        arr[index] = arr[index] + n;
    }
    for (int i=0 ; i<n ; i++)
    {
        if(arr[i]/n>=2)
        {
            ans.push_back(i);
        }
    } 
       return ans;
}
int main()
{
    int n=5;
    int arr[n]={2,3,1,2,3};
     vector<int> result = helper(arr, n);
    if (result.empty()) {
        cout << "No duplicate elements found." << endl;
    } else {
        cout << "Duplicate elements indices: ";
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}