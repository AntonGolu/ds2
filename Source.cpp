
#include <iostream>
using namespace std;
int main()

{
	/*
	
	
	Begin12◦
. Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P:
     
	int a, b;
	double c, P;
	cin >> a >> b;
	c = sqrt(a * a + b * b);
	P = a + b + c;
	cout << "c =" << c << " P = " << P << endl;
	return 0;
	// sqrt квадратный короень
	
	Begin16◦
. Найти расстояние между двумя точками с заданными координатами x1 и x2 на числовой оси: |x2 − x1|.

		
	int x1, x2, rasst;
	cin >> x1 >> x2;
	rasst = abs(x2- x1);
	cout << "rasst =" << rasst << endl;
	return o;
	
	Begin20◦
		.Найти расстояние между двумя точками с заданными координатами
		(x1, y1) и(x2, y2) на плоскости.Расстояние вычисляется по формуле
		
	int x1, x2, y1, y2;
	double avg;
	cin >> x1 >> x2 >> y1 >> y2;
	avg = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "avg =" << avg << endl;
	
	 :
		
	int a, b;
	double x1, x2, x3;
	cin >> a >> b;
	x1 = -sqrt(-b / a);
	x2 = sqrt(-b / a);
	x3 = 0;
	cout << "x1 =" << x1 << "x2 =" << x2 << "x3 =" << x3 << endl;
	
	Begin25◦
		.Найти значение функции y = 3x
		6 − 6x
		2 − 7 при данном значении x
		

	int x;
	double y;
    cin >> x;
	y = 3 * (x*x*x*x*x*x) - 6*(x*x) - 7;
	cout << "y =" << y << endl;
	
	Begin26◦
		.Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значений x.
		
	int x;
	double y;
	cin >> x;
	y = 4 * (2 * (x - 3) * 2(x - 3) * 2(x - 3)) - 7 * ((x - 3)(x - 3)(x - 3));
	cout << "y=" << y << endl;
	            Begin27◦
. Дано число A. Вычислить A
8
, используя вспомогательную переменную и три операции умножения. Для этого последовательно находить A^2
, A^4, A^8
. Вывести все найденные степени числа A.

	int A;
	double avg, g, h;
	cin >> A ;
	avg = A * A;
	g = A * A * A * A;
	h = A * A * A * A * A * A * A * A; 
	cout << "avg=" << avg << "g=" << g << "h=" << h << endl;
	



	Begin28◦
. Дано число A. Вычислить A
15, используя две вспомогательные переменные и пять операций умножения. Для этого последовательно находить
A^2, A^3, A^5, A^10, A^15,
 Вывести все найденные степени числа A.
 
	int A;
	double A2, A3, A5, A10, A15;
	cin >> A;
	A2 = A * A;
	A3 = A * A * A;
	A5 = A * A * A * A * A;
	A10 = A * A * A * A * A * A * A * A * A * A;
	A15 = A * A * A * A * A * A * A * A * A * A * A * A * A * A * A;
	cout << "A2=" << A << "A3=" << A3 << "A5=" << A5 << "A10=" << A10 << "A15=" << A15 << endl;
	/*Integer1◦
. Дано расстояние L в сантиметрах. Используя операцию деления
нацело, найти количество полных метров в нем (1 метр = 100 см).

int L;
double avg;
cin >> L;
avg = L / 100;
cout << "avg=" << avg << endl;
     
	 Integer2◦
. Дана масса M в килограммах. Используя операцию деления нацело,
найти количество полных тонн в ней (1 тонна = 1000 кг).

int m;
double avg;
cin >> m;
avg = m / 1000;
cout << "avg=" << avg << endl;

Integer3◦
. Дан размер файла в байтах. Используя операцию деления нацело,
найти количество полных килобайтов, которые занимает данный файл
(1 килобайт = 1024 байта).

int b;
double avg;
cin >> b;
avg = b / 1024;
cout << "avg=" << avg << endl;

Integer4◦
. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B
(без наложений). Используя операцию деления нацело, найти количество
отрезков B, размещенных на отрезке A.
*/
int A,B;
double avg;
cin >> A >> B;
avg = A % B;
cout << "avg=" << avg << endl;



	return 0;




}