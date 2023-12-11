#include <iostream>

void task1()
{
	int sideA, sideB, area;

	std::cout << "podaj bok a";
	std::cin >> sideA;
	std::cout << "podaj bok b";
	std::cin >> sideB;
	area = (sideA * sideB);
	std::cout << "pole tego kwadratu wynosi:" << area;


}
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "podaj 1 liczbe";
	std::cin >> firstNumber;
	std::cout << "podaj 2 liczbe";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
	
		std::cout << "liczby sa rowne \n";

	else

		std::cout << "liczby sa rozne \n";

	
}	
void task3()
{
	int number;

	std::cout << "podaj liczbe";
	std::cin >> number;

	if (number >= -5)
	{
		if (number < 7)
		{
			std::cout << "liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "liczby niema w zakresie\n";
		}

	}
	else
		std::cout << "liczby niema w zakresie\n";

}
void task4()
{
	int day;
	std::cout << "podaj liczbe od 1 do 7";
	std::cin >> day;

	if (day >= 1 && day <= 7)
	{
		if (day == 1)
			std::cout << "poniedzialek\n";
		if (day == 2)
			std::cout << "wtorek\n";
		if (day == 3)
			std::cout << "sroda\n;";
		if (day == 4)
			std::cout << "czwartek";
		if (day == 5)
			std::cout << "piatek";
		if (day == 6)
			std::cout << "sobota";
		if (day == 7)
			std::cout << "niedziela";
	}
	else
		std::cout << "nie podales liczby od 1 do 7!\n";
}




int main()
{
	task4();
}