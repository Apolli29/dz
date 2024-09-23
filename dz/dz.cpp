#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num1, num2;
    int choice;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Выберите операцию:\n";
    cout << "1 - Сложение\n";
    cout << "2 - Вычитание\n";
    cout << "3 - Умножение\n";
    cout << "4 - Деление\n";
    cout << "5 - Остаток от деления\n";
    cout << "Введите номер операции: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Результат сложения: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Результат вычитания: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Результат умножения: " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 != 0) {
            cout << "Результат деления: " << num1 / num2 << endl;
        }
        else {
            cout << "Ошибка: Деление на ноль!" << endl;
        }
        break;
    case 5:
        if (static_cast<int>(num2) != 0) {
            cout << "Остаток от деления: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
        else {
            cout << "Ошибка: Деление на ноль!" << endl;
        }
        break;
    default:
        cout << "Ошибка: Неверный выбор операции!" << endl;
        break;
    }

    return 0;
}

