#include <iostream>
using namespace std;
int print(int n)
{
    if (n==0)
    {
        return 0;
    }
    int printn = print(n-1) + 1;
    cout<<printn<<endl;
    return printn;
}
int main()
{
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    print(n);
    return 0;
}