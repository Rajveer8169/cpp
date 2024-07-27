#include<iostream>
using namespace std;
void helper(int arr[],int low,int mid,int high)
{
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}
int main()
{
    int n=11;
    int arr[n]={0,0,1,2,1,1,1,2,2,1,0};
    helper(arr,0,0,n-1);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}