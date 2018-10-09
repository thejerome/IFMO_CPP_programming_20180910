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
int a,b,c,max,min,mean;
cin>>a>>b>>c;
    if (a>=b)
    {
        max=a;
        mean=b;
    }
    else
    {
        max=b;
        mean=a;
    }
    if (c>=max)
    {
        min=mean;
        mean = max;
        max=c;
    } else { if (c>mean && c<max)
        {
        min=b;
        mean=c;
        } else {
        min=c;
    }

    }
    cout << min<<' '<<mean<<' '<<max;
};