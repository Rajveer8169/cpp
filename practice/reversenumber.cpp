#include<iostream>
using namespace std;

int helper(int n){
    int reverse =0;
    while(n>0){
        reverse = reverse *10 + n%10;
        n= n/10;
    }
    return reverse;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Reverse is :"<<helper(n);
    return 0;
}