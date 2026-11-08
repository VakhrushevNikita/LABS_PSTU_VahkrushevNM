#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,".UTF-8");
    double a=1.0,b=2.0,step=0.1;
    int n=15;
    double eps=0.0001;
    cout<<"x|Сумма(n=15)|Сумма(точность)|Точное значение"<<endl;
    for(int i=0;i<=10;++i)
    {
        double x=a+i*step;
        double sum_a=1.0,k=1.0;
        for(int j=1;j<=n;++j)
        {
            k=k*x/j;
            sum_a=sum_a+k;
        }
        double sum_b=1.0;
        k=1.0;
        int j=1;
        while(fabs(k)>=eps)
        {
            k=k*x/j;
            sum_b=sum_b+k;
            ++j;
        }
        double exact=exp(x);
        cout<<x<<"|"<<sum_a<<"|"<<sum_b<<"|"<<exact<<endl;
    }
    return 0;
}