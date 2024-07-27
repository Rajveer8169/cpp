#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    int fibn = fib(n-2) + fib(n-1);
    return fibn;
}

int main()
{
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<fib(n);
    return 0;
}