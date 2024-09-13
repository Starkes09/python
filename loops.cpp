#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
   
   int N;
   int sum = 0;

   do{
    cout << "Enter the value of N numbers: " << endl;
    cin >> N;

    if(N < 1){
        cout << "Please enter a positive number" << endl;
    }
   
   }
   while(N < 1);
   {
        sum = N * (N + 1)/2;
   }
        cout << "The sum of first " << N << " natural numbers is "  << sum << endl;
    return 0;
}