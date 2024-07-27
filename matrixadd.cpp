#include<iostream>
using namespace std;
int main()
{
    int a [5] [4] = {{1,2,3,4},{5,9,10,11},{6,12,15,16},{7,13,17,19},{8,14,18,20}};
    int sum = 0;
    for (int i = 1 ; i<5 ; i++)
    {
        for (int j=1 ; j<3 ; j++)
        {
            sum = sum + a [i] [j];
        }
    }
    cout<<sum;
    }