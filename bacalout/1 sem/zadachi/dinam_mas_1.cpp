#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,".UTF-8");
    int n;
    cout<<"Введите размер массива: ";
    cin>>n;
    int* arr=new int[n];
    for (int i=0;i<n;++i)
    {
        arr[i]=rand()%10+1;
    }
    int s=0;
        for (int i=0;i<n;++i)
    {
        cout<< arr[i]<<' ';
        s+=arr[i];
    }

    cout<<endl<<"Сумма эллементов массива равна: "<<s;
    delete[]arr;
    return 0;
}