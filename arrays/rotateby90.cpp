#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>>& matrix , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0 ; i<n/2 ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            swap(matrix[i][j],matrix[n-i-1][j]);
        }
    }
}
int main()
{
    int n = 3;
    int m = 3;
    vector<vector<int>> matrix(n, vector<int>(m)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter " << i << " row and " << j << " column element: ";
            cin >> matrix[i][j];
        }
    }
    helper(matrix , n);
    
    cout << "Modified matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}