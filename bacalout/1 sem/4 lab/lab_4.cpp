#include <iostream>
#include<clocale>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,".UTF-8");
    int n;
    cout<<"Введите размер массива: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Первоначальный массив: "<< endl;
    for (int i=0;i<=(n-1);++i)
    {
        a[i]=rand()%100;
        cout<<a[i]<<' ';
    }
    int ns=0;
    for (int i=0;i<=(n-1);++i)
    {
        if (a[i]%7!=0)
        {
            ns+=1;
            if (a[i]%2!=0)
            {
                ns+=1;
            }
        }
    }
    cout<<endl;
    int z[ns];
    int j=0;
    for (int i=0; i<=(n-1);++i)
    {
        if (a[i]%7==0)
        {
            continue;
        }
        else
        {
           z[j]=a[i];
           ++j;
           if (a[i]%2!=0)
           {
            z[j]=0;
            ++j;
           } 
        }
    }
    cout<<"Полученный после преобразование массив:"<<endl;
    for (int j=0; j<=(ns-1);++j)
    {
        cout<<z[j]<<' ';
    }
    return 0;
}

