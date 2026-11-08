#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,".UTF-8");
    int n;
    cout<<"Введите размер матрицы: ";
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;++i)
    {
        cout<<"Введите по одному элементы строки №"<<i+1<<endl;
        for (int j=0;j<n;++j)
        {
            cin>>a[i][j];
        }
    }
    bool f=true;
    for(int i=0;i<n;++i)
    {
        for (int j=0;j<n;++j)
        {
            int s=0;
            for (int k=0;k<n;++k)
            {
                s+=a[k][i]*a[k][j];
            }
            if (i==j) 
            {
                if (s!=1) { f = false;}
            }
            else 
            { 
                if (s!=0) {f = false;}
            }
        }
    }
    if (f==true) {cout<<"Матрица ортонормированная."<<endl;}
    else {cout<<"Матрица не ортонормированная."<<endl;}
    return 0;
}