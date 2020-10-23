// Task5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>
#include <cmath>

double findFunction(double a, double b, double c,int number_koren=0) {
    if ((b * b - 4 * a * c) >= 0)
    {
        if (number_koren == 1) {
            double x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
            cout << "Первый корень равен " << x << endl;
            return x;
        }
        if (number_koren == 2) {
            double x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
            cout << "Второй корень равен " << x << endl;
            return x;
        }
    }
    else
    {
        cout << "Нет корней " << endl;
        return 0;
    }
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
    double f1 = findFunction(a, b, c, 1);
    double f2 = findFunction(a, b, c, 2);
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
