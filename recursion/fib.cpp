#include<iostream>
using namespace std;
int fib(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main()
{
    int n;
    cout<<"Enter nth position : "<<endl;
    cin>>n;
    cout<<fib(n);
}