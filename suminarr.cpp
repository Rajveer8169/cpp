#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,5,6,4,3};
    int max = arr[0];
    for (int i=1 ; i<=5 ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"Maximun element is : "<<max<<endl;
    return 0;
}