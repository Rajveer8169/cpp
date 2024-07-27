#include<iostream>                  //Time complexity is : O(log N)
using namespace std;
int power(int a, int n)
{
    if (n%2==0)
    {
        if(n==1)
        {
            return a;
        }
        int temp = power(a,n/2);
        return temp*temp;
    }
     if (n%2!=0)
    {
        if(n==1)
        {
            return a;
        }
        int temp = power(a,n/2);
        return temp*temp*a;
    }
}
int main()
{
    int a,n;
     cout<<"Enter number : "<<endl;
     cin>>a;
     cout<<"Enter power : "<<endl;
     cin>>n;
     int result = power(a,n);
     cout<<"The result is : "<<result<<endl;
     return 0;
}