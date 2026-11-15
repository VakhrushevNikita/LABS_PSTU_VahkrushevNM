#include <iostream>
#include <clocale>
using namespace std;

int sum(int count, ...)
{
    int *p = &count;
    int res = 0;
    int a = *(++p);
    for(int i = 1; i < count; ++i)
    {
        int b = *(++p);
        if(i % 2 != 0) {res += (a * b);}
        else {res -= (a * b);}
        a = b;
    }
    return res;
}

int main()
{
    setlocale(LC_ALL, ".UTF-8");
    
    cout << "Сумма 5:  " << sum(5, 1, 2, 3, 4, 5) << endl;
    cout << "Сумма 10: " << sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
    cout << "Сумма 12: " << sum(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12) << endl;
    
    return 0;
}