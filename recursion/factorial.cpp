int factorial(int n) {
    if(n==1 || n==0){
        return n;
    }
    int result = factorial(n-1);
    int fact = result * n;
    return fact;
    // code here
}
