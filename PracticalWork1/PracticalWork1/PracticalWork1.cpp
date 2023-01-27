#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int operation;
	int number1, number2, f1 = 0, f2 = 1, f3;
	while (true) {
		cout << "Введите номер операции\n1) Сложение\n2) Вычитание\n3) Умножение\n4) Деление\n5) Остаток от деления\n6) Фибоначчи\n0) Выход\n";
		do
		{
			cin >> operation;
			if (operation >= 0 && operation <= 6)
			{
				break;
			}
		} while (true);
		if (operation != 0)
		{
			cout << "Введите первое число";
			cin >> number1;
			if (operation <= 5)
			{
				cout << "Введите первое число";
				cin >> number2;
			}
		}
		system("cls");
		switch (operation)
		{
		case 1:
			cout << "Результат сложения: " << number1 + number2;
			break;
		case 2:
			cout << "Результат вычитания: " << number1 - number2;
			break;
		case 3:
			cout << "Результат умножения: " << number1 * number2;
			break;
		case 4:
			cout << "Результат деления: " << double(number1) / double(number2);
			break;
		case 5:
			cout << "Результат целочисленного деления: " << number1 % number2;
			break;
		case 6:
			int sum = 0;
			cout << f1;
			cout << " " << f2;
			sum += f1;
			sum += f2;
			for (size_t i = 0; i < number1 - 2; i++)
			{
				f3 = f1 + f2;
				f1 = f2;
				f2 = f3;
				cout << " " << f3;
				sum += f3;
			}
			cout << "\nСумма всех элементов равна: " << sum;
			break;
		}
		if (operation == 0)
			return(0);
		cout << "\n";
	}
}