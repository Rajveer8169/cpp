#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>ans;

bool issafe(vector<vector<int>>& board , int r , int c , int n)
{
    for(int i = 0 ; i<r ; i++)
    {
        if(board[i][c]==1)
        {
            return false;
        }
    }
    for(int i=r-1 , j=c-1 ; i>=0 && j>=0 ; i-- , j--)
    {
          if(board[i][j]==1)
        {
            return false;
        }
    }
    for(int i=r-1 ,  j=c+1 ; i>=0 && j<n ; i-- , j++)
    {
          if(board[i][j]==1)
        {
            return false;
        }
    }
    return true;
}

void helper(vector<vector<int>>& board , int r , int n)
{
    if(r==n)
    {
        vector<int> temp;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ;j++)
            {
                if(board[i][j]==1)
                {
                    temp.push_back(j+1);
                }
            }
        }
        ans.push_back(temp);
    }
    for(int i=0 ; i<n ; i++)
    {
        if(issafe(board , r , i , n))
        {
            board[r][i]=1;
            helper(board , r+1 , n);
            board[r][i]=0;
        }
    }
}

int main ()
{
    int n=8;
  vector<vector<int>> board(n, vector<int>(n, 0));
    helper(board , 0 ,n);
   for (auto& solution : ans) {
        for (int pos : solution) {
            cout << pos << " ";
        }
        cout << endl;
    }
    return 0;
}