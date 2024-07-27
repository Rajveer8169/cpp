#include<iostream>
#include<vector>
using namespace std;
vector<string> ans;

bool issafe(int n , int srcx , int srcy , vector<vector<int>>& m , vector<vector<int>>& visited)
{
    if(srcx>=0 && srcy>=0 && srcx < n && srcy < n && m[srcx][srcy]==1 && !visited[srcx][srcy])
    {
        return true;
    }
    return false;
}
  void helper(vector<vector<int>>& m , vector<vector<int>>& visited , int n , int srcx , int srcy , string temp)
  {
    if(srcx == n-1 && srcy== n-1 )
    {
        ans.push_back(temp);
        return;
    }
    visited[srcx][srcy]=1;
    if(issafe(n , srcx+1 , srcy , m , visited))
    {
        helper(m , visited , n , srcx+1 , srcy , temp+"D");
    }
      if(issafe(n , srcx , srcy-1 , m , visited))
    {
        helper(m , visited , n , srcx  ,srcy-1 , temp+"L");
    }
      if(issafe(n , srcx , srcy+1 , m , visited))
    {
        helper(m , visited , n , srcx , srcy+1 , temp+"R");
    }
      if(issafe(n , srcx-1 , srcy , m , visited))
    {
        helper(m , visited , n , srcx-1 , srcy , temp+"U");
    }
    visited[srcx][srcy]=0;
    return ;
  }

  int main()
  {
    int n=4;
    vector<vector<int>> m(n,vector<int>(n,0));
    m[0][0]=1;
    m[1][1]=1;
    m[1][3]=1;
    m[1][0]=1;
    m[2][0]=1;
    m[2][1]=1;
    m[3][1]=1;
    m[3][2]=1;
    m[3][3]=1;
     vector<vector<int>> visited(n,vector<int>(n,0));
     helper(m,visited,4,0,0," ");

    for (const auto& path : ans)
    {
        cout << path << endl;
    }
     return 0;
  }
