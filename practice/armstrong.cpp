#include<iostream>
using namespace std;

bool isArmstrong(int num){
    int og = num;
    int count = 0;
    int sum = 0;

    // count digits
    while(num > 0){
        count++;
        num = num / 10;
    }

    num = og;

    // calculate armstrong sum
    while(num > 0){
        int d = num % 10;

        int power = 1;
        for(int i = 0; i < count; i++){
            power = power * d;
        }

        sum = sum + power;

        num = num / 10;
    }

    return og == sum;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isArmstrong(num))
        cout << "True";
    else
        cout << "False";

    return 0;
}
