#include<iostream>
using namespace std;
int helper(int arr[] , int n)
{
    int ans = 0;
    for(int i=0 ; i<n ; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={1,1,2,5,5};
    cout<<helper(arr,5);
    return 0;
}