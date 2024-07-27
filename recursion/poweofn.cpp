#include<iostream>      //Time complexity : O(n)
using namespace std;
int power(int a , int n)
{
  if (n == 1)
  {
    return a;
  }
  int nm1 = power(a , n-1);
  return a * nm1;
}
int main()
{
  int a,n;
  cout<<"Enter number : "<<endl;
  cin>>a;
  cout<<"Enter power : "<<endl;
  cin>>n;
  int result = power(a,n);
  cout<<"The result is : "<<result<<endl;
  return 0;
}