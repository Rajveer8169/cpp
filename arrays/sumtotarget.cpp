#include<iostream>
using namespace std;
void helper(int set[] , int target ,int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for (int j=i+1 ; j<n ; j++)
        {
            int sum = set[i] + set[j];
            if(sum==target)
            {
                cout<<set[i]<<" "<<set[j]<<endl;
            }
        }
    }
    
}
int main()
{
    int set[] = {1, 2, 3, 4, 5, 6, 7};  
    int n = sizeof(set) / sizeof(set[0]);  
    helper(set, 8, n); 
    return 0;
}