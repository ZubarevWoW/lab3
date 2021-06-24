#include<iostream>
#include<cmath>
using namespace std;

void polar(double x, double y, double& r, double& t)
{
	r = sqrt((pow(x, 2)) + (pow(y, 2))); // расчет радиуса
	// расчет теты
	t = atan(y / x);
	t = (t * 180) / 3.14;
}

int main()
{
	setlocale(LC_ALL, "RU");
	double x, y, t, r;
	cout << "Введите x - ";
	cin >> x;
	cout << endl;
	cout << "Введите y - ";
	cin >> y;
	cout << endl;
	polar(x, y, r, t); // заполнение в функцию данных о x, y, r, t
	cout << r << " - Радиус\n";
	cout << t << " - Тета";
	cout << endl;
	system("pause");
	return 0;
}
