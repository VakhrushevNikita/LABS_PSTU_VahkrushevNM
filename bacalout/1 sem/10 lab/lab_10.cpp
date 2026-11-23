#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,".UTF-8");
    int n;
    cout<<"Введите первоначальный размер массива: ";
    cin>>n;
    cout<<endl;
    int* arr= new int[n];
    for (int i=0;i<n;++i)
    {
        arr[i]=rand()%100+1;
        cout<<arr[i]<<' ';
    }
    cout<<endl<<"Укажите через пробел сначала сколько элементов хотите удалить, \nзатем номер элемента (не индекс), начиная с которого надо произвести удаление: ";
    int k, l;
    cin>>k>>l;
    int* temp = new int[n-k];
    for (int i=0;i<(l-1);++i)
    {
        temp[i]=arr[i];
    }
    for (int i=(l-1);i<(n-k);++i)
    {
        temp[i]=arr[i+k];
    }
    delete[] arr;
    arr=temp;
    n=n-k;
    cout<<endl<<"Полученнный массив: ";
    for (int i=0;i<n;++i){cout<<arr[i]<<' ';}
    cout<<endl<<"Укажите через пробел сначала сколько элементов хотите добавить, \nзатем номер элемента (не индекс), после которого надо добавить эти элементы: ";
    int f,s;
    cin>>s>>f;
    int* laps=new int[n+s];
    for (int i=0;i<f;++i)
    {
        laps[i]=arr[i];
    }
    for (int i=0;i<s;++i)
    {
        laps[i+f]=rand()%100+1;
    }
    for (int i=f;i<(n+s);++i)
    {
        laps[i+s]=arr[i];
    }
    delete[] arr;
    arr=laps;
    n=n+s;
    cout<<endl<<"Полученнный массив: ";
    for (int i=0;i<n;++i){cout<<arr[i]<<' ';}
    return 0;
}