//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>


// } Driver Code Ends
// User function Template for C

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i; 
    }
    return fact;
}

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int N;
        scanf("%d", &N);
        printf("%lld\n", factorial(N));

        printf("~%s", "\n");
    }
    return 0;
}
