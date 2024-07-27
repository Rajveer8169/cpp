#include<iostream>
using namespace std;

void rotate(int arr[], int d, int n)
{
    int temp[n];
    
    // Copy elements from d to n-1 in the beginning of temp
    for (int i = d; i < n; i++)
    {
        temp[i - d] = arr[i];
    }
    
    // Copy the first d elements to the end of temp
    for (int i = 0; i < d; i++)
    {
        temp[n - d + i] = arr[i];
    }
    
    // Print the rotated array
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    rotate(arr, 2, 5);
    return 0;
}
