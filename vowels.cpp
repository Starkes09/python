#include <iostream>
using namespace std;

int main(){

    string sentence;

    cout << "Enter your statement: " << endl;
    getline(cin , sentence);

    int vowel_count = 0;
    for(char ch : sentence){
        ch = tolower(ch);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        vowel_count++;
    }

    cout << "The number of vowels in your sentence is " << vowel_count << endl;

    return 0;
}