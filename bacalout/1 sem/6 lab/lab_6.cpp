#include <iostream>
#include <string>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,".UTF-8");
    string s1;
    cout<<"Введите строку: "<<endl;
    getline(cin,s1);
    string a[s1.size()];
    int j=0,i=0;
    while(j<s1.size())
    {
        if(s1[j]!=' '){a[i]+=s1[j];}
        else
        {
            if(a[i].size()>0){++i;}
        }
        j+=1;
    }
    /*if(a[i].size()>0){++i;}
    for(j=0;j<i;++j)
    {
        cout<<a[j]<<' ';
    }
    */
    cout<<endl;
    string s=a[0]; int k=0;
    for (int j=0;j<i;++j)
    {
        if (a[j]==s){cout<<a[j]<<' ';k+=1;}
    }
    cout<<endl<<"Количество повторяющихся слов равных первому, включая первое: "<<k;
    return 0;
}