﻿// Task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>
#include <cmath>

double findFunction(double a, double b, double c) {
    return sqrt(a) + sqrt(b) - sqrt(c);
}

double cinChisloInt() {
    double chislo;
    std::cin >> chislo;
    return chislo;
}

int main()
{
    setlocale(NULL, "rus");
    int a = cinChisloInt();
    int b = cinChisloInt();
    int c = cinChisloInt();
    double f = findFunction(a, b, c);
    cout << "Ответ: " << f << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
