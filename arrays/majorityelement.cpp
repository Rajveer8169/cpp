#include<iostream>
using namespace std;
int helper(int arr[] , int size)
{
    int el=0;
    int count=0;
    for(int i=0 ; i<size ; i++)
    {
        if(count==0)
        {
            el=arr[i];
        }
        else if(el==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count=0;
    for(int i=0 ; i<size ; i++)
    {
        if(el==arr[i])
        {
            count++;
        }
    }
       if(count>size/2)
        {
            return el;
        }
        else
        {
            return -1;
        }
}


int main()
{
    int size=13;
    int arr[size]={1,1,1,2,2,1,2,2,2,1,1,2,1};
    cout<<helper(arr,size);
    return 0;
}