#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Task 1, 2();
class Tasks
{
public:
	// Task 1();
	double hypotenuse(double a, double b)
	{
		double c = sqrt(pow(a, 2) + pow(b, 2));
		cout << " Task 1. �i�������� ������������ ���������� �i ���������: a = " << a << ", b = " << b << ", ���i����:� " << c << endl;

		return c;
	}

	// Task 2();
	void Display_Side(int side, char fillCharacter)
	{
		for (int i = 0; i < side; ++i)
		{
			for (int j = 0; j < side; ++j)
			{
				cout << " " << fillCharacter;
			}
			cout << endl;
		}
	}
};

// Task 3();
class Calculate_Temperature
{
public:
	double celsius(double tf)
	{
		return (5.0 / 9.0) * (tf - 32);
	}

	double fahrenheit(double tc)
	{
		return (9.0 / 5.0) * tc + 32;
	}

	void Print()
	{
		// �����i�
		cout << setw(12) << "�����i� " << "   | " << setw(12) << "���������" << endl;
		cout << "_______________|_________________" << endl;

		for (int celsTemp = 0; celsTemp <= 100; ++celsTemp)
		{
			cout << setw(12) << celsTemp << "   | " << setw(12) << fahrenheit(celsTemp) << endl;
		}
		cout << endl;

		// ���������
		cout << setw(12) << "��������� " << "   | " << setw(12) << "�����i�" << endl;
		cout << "_______________|_________________" << endl;

		for (int farTemp = 32; farTemp <= 212; ++farTemp)
		{
			cout << setw(12) << farTemp << "   | " << setw(12) << celsius(farTemp) << endl;
		}
		cout << "End." << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	Tasks tasks;

	// Task 1
	tasks.hypotenuse(3.0, 4.0);
	tasks.hypotenuse(5.0, 12.0);
	tasks.hypotenuse(8.0, 15.0);
	cout << endl;

	// Task 2.
	int side;
	char fillCharacter;

	while (true)
	{
		cout << "Task 2. ����i�� ������� ��������: " << endl;
		cin >> side;
		if (side < 1 || cin.fail())
		{
			cin.clear();
			cout << "�������, ����i�� ��������� ������� ��������. " << endl;
			continue;
		}

		cout << "����i�� ������ ��� ����������: " << endl;
		cin >> fillCharacter;
		if (cin.fail())
		{
			cin.clear();
			cout << "�������, ����i�� ���������� ������: " << endl;
			continue;
		}
		break;
	}

	cout << "Square:" << endl;
	cout << endl;

	tasks.Display_Side(side, fillCharacter);
	cout << endl;

	// Task 3.
	Calculate_Temperature calcu;

	calcu.Print();

	return 0;
}