#include <iostream>
#include <clocale>
using namespace std;

void mult(double a, double b)
{
    cout << "Результат: " << a * b << endl;
}

void mult(double r1, double i1, double r2, double i2)
{
    double re = r1 * r2 - i1 * i2;
    double im = r1 * i2 + i1 * r2;
    cout << "Результат: " << re;
    if(im >= 0) cout << " + " << im << "i" << endl;
    else cout << " - " << -im << "i" << endl;
}

int main()
{
    setlocale(LC_ALL, ".UTF-8");
    cout << "Умножение вещественных - 'a', комплексных - 'b': ";
    char c; cin >> c;
    switch(c)
    {
        case 'a': 
            cout << "Введите два вещественных: "; 
            double x, y; cin >> x >> y; 
            mult(x, y); 
            break;
        case 'b': 
            cout << "Введите 1-е комплексное (действ. и мнимую): "; 
            double r1, i1; cin >> r1 >> i1; 
            cout << "Введите 2-е комплексное (действ. и мнимую): "; 
            double r2, i2; cin >> r2 >> i2; 
            mult(r1, i1, r2, i2); 
            break;
        default: 
            cout << "Ошибка ввода" << endl;
    }
    return 0;
}