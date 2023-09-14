#include <iostream>
#include <string>
using namespace std;
string trim(const string input, int maxLength) {
    if (maxLength <= 0) {

        return "";
    }

    if (input.length() <= maxLength) {
        return input;
    }

    if (maxLength <= 3) {
        return input.substr(0, maxLength) + "...";
    }

    int dotsLength = 3;
    int trimmedLength = maxLength - dotsLength;
    
    return input.substr(0, trimmedLength) + "...";
}

int main() {
    cout << trim("Creating kata is fun", 14) << endl;  
    cout << trim("Code Wars is pretty rad", 50) << endl; 
    cout << trim("He", 1) << endl;  
    cout << trim("Hey",2) << endl;  
    
    return 0;
}
