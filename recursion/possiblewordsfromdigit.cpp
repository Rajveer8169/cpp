#include<iostream>
#include<vector>
using namespace std;
vector<string> keys={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void helper(int a[],string temp , int i)
{
    if(i==3)
    {
        cout<<temp<<" ";
        return;
    }
    for(int j=0 ; j<keys[a[i]].size() ; j++)
    {
        helper(a , temp+keys[a[i]][j] ,i+1);
    }
}

int main()
{
    int a[3]={2,3,4};
    string temp;
    helper(a,temp,0);
    return 0;
}