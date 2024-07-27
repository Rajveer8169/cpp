#include<iostream>
#include<vector>
using namespace std;

void helper(string a , int i)
{
    if (a[1]!='b' && i==a.size())
    {
        cout<<a<<" "<<endl;
    }
    else if (i==a.size())
    {
        return;
    }
    for (int j=i ; j<a.size() ; j++)
    {
        swap(a[i],a[j]);
        helper(a,i+1);
        swap(a[i],a[j]);
    }
}
int main()
{
string a="abc";
helper(a,0);
return 0;
}