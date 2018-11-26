//Даны пять действительных чисел: x, y, xc, yc, r. 
// Проверьте, принадлежит ли точка (x, y) кругу с центром (xc, yc) и радиусом r. 
// Если точка принадлежит кругу, выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r), 
// возвращающую True, если точка принадлежит кругу и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInCircle 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInCircle не должна содержать инструкцию if.
//
//Формат входных данных
//        Вводятся пять действительных чисел.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//0.5
//0.5
//0
//0
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//0.5
//0.5
//1
//1
//0.1
//Sample Output 2:
//
//NO

#include <iostream>
#include <cmath>

using namespace std;

//function IsPointInCircle
    bool IsPointinCircle(double x, double y, double xc, double yc, double r){
        bool log=false;
        for(int i=0; i<1 && (pow((xc-x),2)+pow((yc-y),2) <= pow(r,2)); i++){
            log=true;
        }
        return(log);
    }

int t03_circle() {
    double x=0,y=0,xc=0,yc=0,r=0;
    cin >> x >> y >> xc >> yc >> r;
    if (IsPointinCircle(x,y,xc,yc,r)){
        cout << "YES";
    } else cout << "NO";
    return 0;
}
