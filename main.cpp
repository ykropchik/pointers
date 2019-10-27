#include <iostream>
#include "lib.h"
/*
 * Запросить кол-во элементов массива у пользователя
 * Посчитать сумму
 * Вывести
 */

using namespace std;

unsigned int n = 0;
int *pointer = nullptr;

int main() {
    /* Запрос элементов*/
    cout << "Введите кол-во элементов будущего массива: \n";
    cin >> n;

    /*Создание массива и запрос i-го элемента*/
    pointer = new int[n];

    for (unsigned int i = 0; i < n; i++){
        cout << "Введите " << (i + 1) << " элелемент \n";
        cin >> pointer[i];
    }

    /*Вывод итогового массива*/
    for (unsigned int i = 0; i < n; i++){
        cout << pointer[i] << " ";
    }
    cout << "\n";

    /*Подсчет суммы и вывод ответа*/
    cout << "Сумма всех элементов массива = " << sum(pointer, n);

    /*Освобождение памяти*/
    delete [] pointer;

    return 0;
}