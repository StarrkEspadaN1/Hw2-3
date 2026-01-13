#include <iostream>

void task1();
void task2();
void task3();

int main() {
    setlocale(LC_ALL, "Russian");
    task1();
    task2();
    task3();
    return 0;
}

void task1() {
    std::cout << "\nЗадание 1: счастливое число\n";

    int n;
    std::cout << "Введите 6-значное число: ";
    std::cin >> n;

    if (n < 100000 || n > 999999) {
        std::cout << "Ошибка: не 6-значное число\n";
        return;
    }

    int sum1 = (n / 100000) + (n / 10000 % 10) + (n / 1000 % 10);
    int sum2 = (n / 100 % 10) + (n / 10 % 10) + (n % 10);

    if (sum1 == sum2) {
        std::cout << "Число счастливое\n";
    }
    else {
        std::cout << "Число не счастливое\n";
    }
}

void task2() {
    std::cout << "\nЗадание 2: поменять цифры\n";

    int n;
    std::cout << "Введите 4-значное число: ";
    std::cin >> n;

    if (n < 1000 || n > 9999) {
        std::cout << "Ошибка: не 4-значное число\n";
        return;
    }

    int d1 = n / 1000;
    int d2 = n / 100 % 10;
    int d3 = n / 10 % 10;
    int d4 = n % 10;

    int result = d2 * 1000 + d1 * 100 + d4 * 10 + d3;

    std::cout << "Результат: " << result << "\n";
}

void task3() {
    std::cout << "\nЗадание 3: максимальное из 7 чисел\n";

    int max, num;

    std::cout << "Введите 7 чисел:\n";
    std::cin >> max;

    for (int i = 1; i < 7; i++) {
        std::cin >> num;
        if (num > max) max = num;
    }

    std::cout << "Максимальное: " << max << "\n";
}