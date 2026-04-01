#include <iostream>
#include <cmath>
using namespace std;

// Прототип функции (ещё его называют заголовком)
// Либо функцию, которая используется в главной функции main() поместить выше,
// то есть на месте прототипа, либо использовать прототип, а функцию ниже описать
double Square(double x1, double y1, double x2, double y2, double x3, double y3);

int main()
{
    // Подключение русского языка
    setlocale(LC_ALL, "Russian");

    //координаты точек 
    double x1 = 3, y1 = 2;
    double x2 = 3, y2 = 6;
    double x3 = 14, y3 = 2;
    double x4 = 10, y4 = -3;
    double x5 = 7, y5 = -2;

    //переменные для площади 
    double S1, S2, S3, S;

    //Делаем 3 Треугольника
    S1 = Square(x1, y1, x2, y2, x3, y3);
    S2 = Square(x1, y1, x3, y3, x4, y4);
    S3 = Square(x1, y1, x4, y4, x5, y5);

    S = S1 + S2 + S3;

    cout << "S1 = " << S1 << endl;
    cout << "S2 = " << S2 << endl;
    cout << "S3 = " << S3 << endl;
    cout << "Площадь пятиугольника " << S << endl;

    system("pause");
    return 0;
}
double Square(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double S;
    S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
    return S;
}

