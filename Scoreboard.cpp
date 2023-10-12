#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

vector<int> scoreboard(const string& scoreString) {
    //Словарь для преобразования слов в числа
    map<string, int> wordToNumber = {
        {"nil", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    vector<int> result;
    string currentWord;

    for (char c : scoreString) {
        if (isalpha(c)) {
            // Собираем буквы, чтобы преобразовать их в число
            currentWord.push_back(c);
        } else {
            // Если встретился пробел или другой символ, преобразуем текущее слово в число
            if (!currentWord.empty()) {
                int num = wordToNumber[currentWord];
                if (num != 0 || currentWord == "nil") {
                    result.push_back(num);
                }
                currentWord.clear();
            }
        }
    }

    // Если встретился символ, который не является буквой и текущее слово не пусто, то преобразуем текущее слово в число.
    if (!currentWord.empty()) {
        int num = wordToNumber[currentWord];
        if (num != 0 || currentWord == "nil") {
            result.push_back(num);
        }
    }

    return result;
}
//Ввод тестов
int main() {
    string scoreString;
    getline(cin, scoreString);

    vector<int> score = scoreboard(scoreString);

    for (int num : score) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
