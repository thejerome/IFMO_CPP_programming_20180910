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

bool YestLiKrovatDlyaKorolevy(int n, int xk, int yk, int rows[])
{
	bool answ = true;
	for (int j = 1; j <= xk; j++) if (rows[j] == yk || abs(yk - rows[j]) == abs(xk - j))
	{
		answ = false; break;
	}
	return (answ && abs(rows[xk - 1] - yk) > 1);
}
int garemkorolya(int n, int x, int rows[], int answer)
{

	for (int y = 1; y <= n; y++)
	{

		if (YestLiKrovatDlyaKorolevy(n, x, y, rows))
		{
			rows[x] = y;
			if (!(x == n))
			{
				answer += garemkorolya(n, x + 1, rows, 0);
			}
			else
			{
				answer++;
				rows[x] = -3;
			}
		}
		if (y == n)
		{
			rows[x - 1] = -3;
		}
	}

	return answer;
}
int t08_queen()
{
	int a;
	cin >> a;
	int rows[10];
	for (int i = 0; i < 10; i++)
	{
		rows[i] = -3;
	}
	cout << garemkorolya(a, 1, rows, 0) << endl;
	return 0;
}
