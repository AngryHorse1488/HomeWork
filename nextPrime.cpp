#include <iostream>
bool isPrime(int num) { //Функция проверки на простое число
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

int nextPrime(int n) {
    n++; //Следующее число,что бы функция не выдавала одно и тоже, если на вход будет подано простое число

    while (true) { //Цикл для определения следующего простого числа 
        if (isPrime(n)) {
            return n;
        }
        n++; 
    }
}
using namespace std;
int main() { // Для проверки тестов 
    int n;
    cin >> n;

    int result = nextPrime(n);
    cout <<result << std::endl;

    return 0;
}
