//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
    int a,b,c,m,mi,t;
    cin>>a>>b>>c;
    if (a>=b)
    {
        m=a;
        t=b;
    }
    else
    {
        m=b;
        t=a;
    }
    if (c>=m)
    {
        mi=t;
        t =m;
        m=c;
    } else { if (c>t && c<m)
        {
            mi=a;
            t=c;
        } else
            mi=c;
    }
    cout << mi<<' '<<t<<' '<<m;
};