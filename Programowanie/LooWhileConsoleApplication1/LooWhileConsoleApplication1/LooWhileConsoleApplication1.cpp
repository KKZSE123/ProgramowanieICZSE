#include <iostream>
using namespace std;

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task1()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	while (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}

	std::cout << "Suma " << sum << "\n";
	//4125
}

//Napisz program, kt�ry policzy NWD dw�ch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz� liczb�\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug� liczb�\n";
	std::cin >> secondNumber;

	int nwd;
	/*
	if (firstNumber < secondNumber)
		nwd = firstNumber;
	else
		nwd = secondNumber;
	*/
	nwd = (firstNumber < secondNumber) ? firstNumber : secondNumber;

	/*
	if (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		nwd--;
		if (secondNumber % nwd != 0
			|| firstNumber % nwd != 0)
		{
			nwd--;
			if (secondNumber % nwd != 0
				|| firstNumber % nwd != 0)
			{
				nwd--;
				//if...
			}
		}
	}
	*/

	//wersja 1
	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		--nwd;
	}

	std::cout << "NWD = " << nwd << "\n";

	//wersja 2
	nwd = 1;
	int dividend = 2;
	int tmpFirstNumber = firstNumber, tmpSecondNumber = secondNumber;
	while (tmpFirstNumber >= dividend
		&& tmpSecondNumber >= dividend)
	{
		if (tmpFirstNumber % dividend == 0
			&& tmpSecondNumber % dividend == 0)
		{
			tmpFirstNumber = tmpFirstNumber / dividend;
			tmpSecondNumber /= dividend;
			nwd *= dividend;
		}
		else
			dividend++;
	}
	std::cout << "NWD = " << nwd << "\n";

	//wersja 3
	//NWD(a, b) = a				je�li b = 0
	//NWD(a, b) = NWD(b, a % b) je�li b != 0
	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	nwd = a;
	std::cout << "NWD = " << nwd << "\n";
}

//Sprawdzanie czy liczba jest palindromem.
void task3()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	//wersja 1

	//obliczam ilo�� cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//licz� 10 do pot�gi numberOfDigit - 1
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}

	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	while (leftNumber > 10)
	{

	}

}

int main()
{
	task2();
}