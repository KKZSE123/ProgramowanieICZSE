#include <iostream>

//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczbê doodatni¹:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczbê doodatni¹:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczbê doodatni¹:\n";
					std::cin >> numberFromUser;
					//wklejamy ca³ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczbê dodatni¹:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, który wylosuje liczbê a nastêpnie uzytkownik bêdzie musia³ j¹ zgadn¹æ.
void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczbê:\n";
			std::cin >> numberFromUser;
			//...
		}
	}*/

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za du¿a liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za ma³a liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!!\n";

}

//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedzia³u <1,x>.
//Gdzie x pdaje u¿ytkownika.
void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long upperRange;
	std::cout << "Podaj górny zakres wiêkszy b¹dŸ równy 1\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if (upperRange > 1)
	{
		std::cout << "2, ";
		if (upperRange > 2)
		{
			std::cout << "3, ";
			if (upperRange > 3)
			{
				std::cout << "4, ";
				//.....
			}
		}
	}
	*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task5()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
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

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
	//4125
}

//* Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero. 
//Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
void task6()
{
	int number;
	int sum = 0;
	int numberOfNumbers = 0;

	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> number;
	sum = sum + number;
	numberOfNumbers++;
	if (number != 0)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
		if (number != 0)
		{
			std::cout << "Podaj liczbê:\n";
			std::cin >> number;
			sum = sum + number;
			numberOfNumbers++;
			//if ...
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		if (number != 0)
		numberOfNumbers++;
	} while (number != 0);

	//numberOfNumbers--;
	std::cout << "Suma liczb wynosi " << sum << "\n";
	double avg = sum * 1.0 / numberOfNumbers;
	std::cout << "Œrednia " << avg << "\n";
}

//Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej. 
//Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task7()
{
	int number;
	int rest;

	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	/*
	rest = number % 10;
	std::cout << rest << ", ";
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		std::cout << rest << ", ";
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			std::cout << rest << ", ";
			number = number / 10;
			//if ...
		}
	}
	*/

	do
	{
		rest = number % 10;
		std::cout << rest << ", ";
		number = number / 10;
	} while (number != 0);
}
void task8()
{
	





}

int main()
{
	task7();

}