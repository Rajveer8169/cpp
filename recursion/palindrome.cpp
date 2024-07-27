#include<iostream>
using namespace std;
int print(int n)
{
    if (n==0)
    {
        return 0;
    }
    int temp=print(n-1)+1;
    cout<<temp<<endl;
    return temp;
}
int main()
{
    print(10);
    return 0;
}