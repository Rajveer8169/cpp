#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    int sumnm1 = sum(n-1);
    int sumn = sumnm1 + n;
    return sumn;
}
    int main ()
    {
        int n;
        cout<<"Enter n"<<endl;
        cin>>n;
        cout<<sum(n)<<endl;
        return 0;
    }
