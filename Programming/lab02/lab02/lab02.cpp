#include <iostream>
#include <cmath>

using namespace std;

/*
* Створити програму, яка зчитує радіус кола R (радіус задати як дійсне число – значення типу float)
* розраховує і друкує діаметр (D=2R), довжину кола (C=2πR) і площу круга (S=πR2)
* ля константи π використати значення 3.14159
*/

class Task1
{
private:
	float d, c, s; //
	const double pi = 3.14159;
public:
	void Calculations(float R)
	{
		d = 2 * R;
		c = 2 * pi * R;
		s = pi * pow(R, 2);

		cout << "Дiаметр = " << d << " \n" << "Довжина кола = " << c << "\n" << "Площа кола = " << s << endl;
	}
};

/*
* а) Створити програму, яка зчитує три ненульових значення типу float, визначає і друкує, чи можуть вони бути сторонами трикутника.
* б) Створити програму, яка зчитує три ненульових цілих числа, визначає і друкує, чи можуть вони бути сторонами прямокутного трикутника
*/

class Task2
{
public:
	bool Tricutnik(int a, int b, int c)
	{
		return (a + b > c) && (a + c > b) && (b + c > a);
	}

	bool RightTricutnik(int a, int b, int c)
	{
		return (a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b);
	}
};

/*
* Створити програму, яка зчитує розмір сторони квадрата і потім друкує зірочками і пробілами пустий квадрат заданого розміру.
* Програма повинна працювати для будь-яких розмірів, заданих в інтервалі від 1-20.
*/

class Task3
{
public:
	void CalculationDisplay(short x1)
	{
		for (int i = 0; i < x1; ++i)
		{
			for (int j = 0; j < x1; ++j)
			{
				if (i == 0 || i == x1 - 1 || j == 0 || j == x1 - 1)
				{
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
};

/*
*/

class Task4
{
private:
	double e, ex;
public:
	long long factorial(int x2)
	{
		if (x2 == 0) return 1;

		long long result = 1;

		for (int i = 2; i <= x2; ++i)
		{
			result *= i;
		}

		return result;
	}

	double CalculationE(int n2)
	{
		double e = 1.0;

		for (int i = 0; i <= n2; i++)
		{
			e += 1.0 / factorial(i);
		}

		return e;
	}

	double CalculationEX(int n2, int n3)
	{
		double ex = 1.0;

		for (int i = 0; i <= n2; ++i)
		{
			ex += pow(n3, i) / factorial(i);
		}

		return ex;
	}
};

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	// Task 1
	Task1 task1;

	float R;
	cout << "Task 1: Enter the radius of the circle .." << endl;
	cin >> R;

	task1.Calculations(R);

	//Task 2
	Task2 task2;

	int a, b, c;

	while (true)
	{
		cout << "Task 2: Введiть 3 ненульовi числа: " << endl;
		cin >> a >> b >> c;

		if (cin.fail() || a == 0 || b == 0 || c == 0)
		{
			cin.clear();
			cout << "Помилка, спробуйте ще раз.. " << endl;
			continue;
		}

		break;
	}

	if (task2.Tricutnik(a, b, c))
	{
		cout << "Даннi значення " << a << ", " << b << ", " << c << " - можуть бути сторонами трикутника." << endl;
	}
	else {
		cout << "Даннi значення " << a << ", " << b << ", " << c << " - не можуть бути сторонами трикутника." << endl;
	}

	if (task2.RightTricutnik(a, b, c))
	{
		cout << "Даннi значення " << a << ", " << b << ", " << c << " - можуть бути сторонами прямокутного трикутника." << endl;
	}
	else {
		cout << "Даннi значення " << a << ", " << b << ", " << c << " - не можуть бути сторонами прямокутного трикутника." << endl;
	}

	// Task 3();
	Task3 task3;
	short x1;

	while (true)
	{
		cout << "Task 3: Введiть число вiд 1 до 20.." << endl;
		cin >> x1;

		if (cin.fail() || x1 < 1 || x1 > 20)
		{
			cin.clear();
			cout << "Спробуйте ще раз.." << endl;
			continue;
		}

		break;
	}

	task3.CalculationDisplay(x1);

	//Task 4 (Bonus)
	Task4 task4;

	int x2;

	while (true)
	{
		cout << "Task4: Введiть ненульове число: " << endl;
		cin >> x2;

		if (cin.fail())
		{
			cin.clear();
			cout << "Спробуйте ще раз.." << endl;
			continue;
		}

		break;
	}

	cout << "Факторiал " << x2 << " = " << task4.factorial(x2) << endl;
	cout << endl;

	int n2;
	cout << "Введiть кiлькiсть членiв для обчислення e: " << endl;
	cin >> n2;
	cout << "e = " << task4.CalculationE(n2) << endl;

	int n3;
	cout << "Введiть n для обчислення e^x: " << endl;
	cin >> n3;
	cout << "e^x = " << task4.CalculationEX(n2, n3) << endl;

	return 0;
};