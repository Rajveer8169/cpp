#include<iostream>
using namespace std;

//n
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
    int max=arr[0];
    for(int i=0 ; i<n ; i++)
    {
        if (max < arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}