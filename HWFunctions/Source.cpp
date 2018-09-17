#include<iostream>
#include<ctime>
#include<math.h>


using namespace std;

void stepen(int a, int b,int c) {
	c= pow(a, b);
	cout << c << endl;
}

void fun(int a, int b) {
	int sum = 0;
	if (a < b) {
		int i = a + 1;
		while (i < b) {
			sum += i;
			i++;
		}
		cout << "����� ����� ����� " << sum << endl;
	}
	else if (a > b) {
		int i = b + 1;
		while (i < a) {
			sum += i;
			i++;
		}
		cout << "����� ����� ����� " << sum << endl;
	}
	else
	{
		cout << "����� ����� ����� " << sum << endl;
	}
}

double Rounding(double digit, int accuracy) {
	double temp, round;
	int tens = 1;
	int tmp, last;
	for (int i = 1; i <= accuracy; i++)
	{
		tens *= 10;
	}
	tmp = digit*tens * 10; 
	last = tmp % 10; 
	temp = tmp / 10;      
	temp = int(temp);         

	if (last >= 5) {
		temp++;
	}   
round = temp / tens; 

	return round;
	}


int main() {
	setlocale(LC_ALL, "Rus");

	int q;
	cout << "������� ����� �������: ";
	cin >> q;

	switch (q) {
	case 1:
		cout << "1.	�������� �������, ������� ��������� ��� ���������: ��������� ������� � ���������� �������, � ��������� ������� ����� �� ������ ���������� ������.";

		int a, b, c;
		cin >> a >> b;
		stepen(a, b, c);
		break; 
	case 2:
		cout << "2.	�������� �������, ������� �������� � �������� ���������� 2 ����� ����� � ���������� ����� ����� �� ��������� ����� ����.";
		cout << endl;
		int k, d;
		cout << "������� ������ �����: ";
		cin >> k;
		cout << "������� ������ �����: ";
		cin >> d;
		fun(k, d);
		break;
	case 3:
		cout << "3.	�������� ������� ��� ���������� ��������� ����� � �������� ���������.";
		cout << endl;
		int accuracy;
		double digit;
		cout << "������� ����� ��� ����������: ";
		cin >> digit;
		cout << "������� ���������� ������ ����� �������: ";
		cin >> accuracy;
		cout << "����������� ����� " << Rounding(digit, accuracy);
		cout <<endl;
		break;
	}
	system("pause");
	return 0;
}
