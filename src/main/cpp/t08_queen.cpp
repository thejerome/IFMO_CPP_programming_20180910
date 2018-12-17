//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//        Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Подсказка
//        Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. 
// Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), 
// то такой вариант даже не стоит рассматривать. 
// Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//Sample Input:
//
//8
//Sample Output:
//
//92

#include <iostream>
#include <vector>

using namespace std;

int desk[10];

bool Check(int i, int j, int k)
{
	if (k == i) {
		return true; 
	}

	return (desk[k] != j) && ((i - k) != (desk[k] - j)) && ((i - k) != (j - desk[k])) && Check(i, j, k + 1);
}

int CountVariants(int i, int j, int k)
{
	if (j == i)
	{
		return 1;
	}

	if (k < i)
	{
		int temp = 0;
		if (Check(j, k, 0))
		{
			desk[j] = k;
			temp = CountVariants(i, j + 1, 0);
		}
		return temp + CountVariants(i, j, k + 1);
	}
	
	return 0;
}
int t08_queen(){
	int n;
	cin >> n;
	cout << CountVariants(n, 0, 0);
    return 0;
}
