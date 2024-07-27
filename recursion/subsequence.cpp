#include<iostream>
using namespace std;
void helper(string s , string temp , int i)
{
    if (i==s.size())
    {
        cout<<temp;
        return;
    }
    //take
    helper(s,temp+s[i],i+1);
    //not take
    helper(s,temp,i+1);
    return;
}
int main()
{
    string s="abc";
    helper(s," ",0);
    return 0;
}