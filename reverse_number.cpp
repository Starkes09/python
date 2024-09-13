#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    int reverse = 0;
    int remainder;
    
    cout << "Enter the no. u want to reverse :" << endl;
    cin >> n;

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    cout << reverse << endl;

    return 0;
}