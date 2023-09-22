#include <string>
using namespace std;
int sumOfIntegers(const string& s) {
    int sum = 0;
    string currentNumber = "";

    for (char c : s) {
        if (isdigit(c)) {
            currentNumber += c;
        } else if (!currentNumber.empty()) {
            sum += stoi(currentNumber);
            currentNumber = "";
        }
    }

    if (!currentNumber.empty()) {
        sum += stoi(currentNumber);
    }

    return sum;
}
