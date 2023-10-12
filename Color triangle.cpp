#include <iostream>
#include <string>

using namespace std;

string triangle(const string& row) {
    if (row.size() == 1) {
        // Если входная строка содержит только один символ, вернуть его как результат.
        return string(1, row[0]);
    }

    string result;
    for (int i = 0; i < row.size() - 1; i++) {
        char left = row[i];
        char right = row[i + 1];

        if (left == right) {
            // Если два соседних символа одинаковы, используем тот же цвет в новой строке.
            result += left;
        } else {
            // Если два соседних символа разные, находим недостающий цвет в новой строке.
            if ((left == 'R' && right == 'G') || (left == 'G' && right == 'R')) {
                result += 'B';
            } else if ((left == 'R' && right == 'B') || (left == 'B' && right == 'R')) {
                result += 'G';
            } else if ((left == 'G' && right == 'B') || (left == 'B' && right == 'G')) {
                result += 'R';
            }
        }
    }
    // Рекурсивно вызываем функцию для новой строки с одним цветом меньше.
    return triangle(result);
}
//Ввод тестов
int main() {
    string input;
    
    cin >> input;
    string result = triangle(input);
    cout << result << endl;

    return 0;
}
