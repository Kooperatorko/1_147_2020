#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, D, x, x1, x2;
	cout << "������� ��������� � ������� �������������.\n";
	cout << "������� a: "; cin >> a;
	cout << "������� b: "; cin >> b;
	cout << "������� c: "; cin >> c;
	D = b * b - 4 * a * c;
	if (D < 0)
	{
		cout << "������������ = " << D << ", ��� ������ 0, ������������� ������ ���." << endl;
	}
	if (D == 0)
	{
		x = (-b) / (2 * a);
		cout << "������������ = " << D << "." << endl;
		cout << "������ ��������� = " << x << "." << endl;
	}
	else
	{
		cout << "������������ = " << D << "." << endl;
		x1 = ((-b) + sqrt(D)) / (2 * a);
		cout << "������ ������ ��������� = " << x1 << "." << endl;
		x2 = ((-b) - sqrt(D)) / (2 * a);
		cout << "������ ������ ��������� = " << x2 << "." << endl;
	}
	return 0;
}