//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {

	int n, h, f0, f1, i;

     cin >> n;

     f0 = 0;
     f1 = 1;
     h = 0;
     i = 1;
     
    if (n == 0)
    	{
    		cout << 0;
    	}
    else if (n == 1) 
    	{
    		cout << 1;
    	}
    else
    {
    	while (i != n) 
    		{
    			h = f0 + f1; 
    			f0 = f1;
    			f1 = h;
    			i = i + 1;
    		}

     cout << h;
 }

};