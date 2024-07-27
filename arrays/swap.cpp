#include<iostream>
using namespace std;
int swap(int arr[] , int i , int j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   
}
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter "<<i+1<<" Element : "<<endl;
        cin>>arr[i];
    }
    swap(arr,1,2);
     cout<<arr[1]<<" "<<arr[2];
    return 0;
}