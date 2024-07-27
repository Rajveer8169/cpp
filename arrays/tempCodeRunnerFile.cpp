#include<iostream>
using namespace std;

void helper(int set[], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)  // Ensure j starts from i+1 to avoid counting the same element twice
        {
            int sum = set[i] + set[j];
            if (sum == target)
            {
                cout << set[i] << " " << set[j] << endl;  // Print the pairs with a newline for better readability
            }
        }
    }
}

int main()
{
    int set[] = {1, 2, 3, 4, 5, 6, 7};  // Initialize the array directly
    int n = sizeof(set) / sizeof(set[0]);  // Calculate the size of the array
    helper(set, 8, n);  // Call the helper function with correct parameters
    return 0;
}
