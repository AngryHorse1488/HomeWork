#include <iostream>
#include <string>
using namespace std;

string removeVowels(string input) {
    string result = "";

    for (char c : input) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }

    return result;
}



int main() {
    string input;
    cin>>input;
    string result=removeVowels(input);
    
    cout<<result<<endl;
    
    return 0;
}
