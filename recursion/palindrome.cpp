//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool helper(string s , int start , int end){
        if(start>=end){
            return true;
        }
        if(s[start] != s[end]){
            return false;
        }
        return helper(s , start+1 , end-1);
    }
    
    bool isPalindrome(string& s) {
        // code here
        int start = 0;
        int end = s.size() - 1;
        return helper(s,start,end);
        
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the string

        Solution ob; // Create an instance of Solution
        if (ob.isPalindrome(s)) {
            cout << "true"; // Print true if palindrome
        } else {
            cout << "false"; // Print false if not a palindrome
        }
        cout << "\n~\n"; // Print newline after each result
    }

    return 0;
}

// } Driver Code Ends
Time Complexity: O(n)
Space Complexity: O(n)
