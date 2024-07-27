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
}
int main()
{
    int n = 4;
    int m = 4;
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