#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>>& matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> temp = matrix;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            if(temp[i][j]==0)
            {
                if(i-1>=0)
                {
                    matrix[i][j]=matrix[i][j] + temp[i-1][j];
                    matrix[i-1][j]=0;
                }
                if(j-1>=0)
                {
                    matrix[i][j]=matrix[i][j] + temp[i][j-1];
                    matrix[i][j-1]=0;
                }
                if(i+1<n)
                {
                    matrix[i][j]=matrix[i][j] + temp[i+1][j];
                    matrix[i+1][j]=0;
                }
                if(j+1<m)
                {
                    matrix[i][j]=matrix[i][j] + temp[i][j+1];
                    matrix[i][j+1]=0;
                }
            }
        }
    }
}
int main() {
    int n = 4;
    int m = 4;
    vector<vector<int>> matrix(n, vector<int>(m)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter " << i << " row and " << j << " column element: ";
            cin >> matrix[i][j];
        }
    }
    helper(matrix);

   
    cout << "Modified matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
