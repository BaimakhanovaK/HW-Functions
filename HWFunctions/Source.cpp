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
		cout << "Сумма чисел равна " << sum << endl;
	}
	else if (a > b) {
		int i = b + 1;
		while (i < a) {
			sum += i;
			i++;
		}
		cout << "Сумма чисел равна " << sum << endl;
	}
	else
	{
		cout << "Сумма чисел равна " << sum << endl;
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
	cout << "Введите номер задания: ";
	cin >> q;

	switch (q) {
	case 1:
		cout << "1.	Написать функцию, которая принимает два параметра: основание степени и показатель степени, и вычисляет степень числа на основе полученных данных.";

		int a, b, c;
		cin >> a >> b;
		stepen(a, b, c);
		break; 
	case 2:
		cout << "2.	Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.";
		cout << endl;
		int k, d;
		cout << "Введите первое число: ";
		cin >> k;
		cout << "Введите второе число: ";
		cin >> d;
		fun(k, d);
		break;
	case 3:
		cout << "3.	Написать функцию для округления заданного числа с заданной точностью.";
		cout << endl;
		int accuracy;
		double digit;
		cout << "Введите число для округления: ";
		cin >> digit;
		cout << "Введите количество знаков после запятой: ";
		cin >> accuracy;
		cout << "Округленное число " << Rounding(digit, accuracy);
		cout <<endl;
		break;
	}
	system("pause");
	return 0;
}
