#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter "<<i+1<<" Element"<<endl;
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"The sum is : "<<sum;
    return 0;
}