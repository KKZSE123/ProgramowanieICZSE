#include <iostream> //Krystian Kostur IC 31.10.2023



void task1()
{
	float  firstNumber, height, area;

	std::cout << "podaj pierwszy bok:";
	std::cin >> firstNumber;
	std::cout << "podaj wysokosc:";
	std::cin >> height;
	
		if(firstNumber <= 0 || height <= 0)
		{
			std::cout << "nie ma ujemnego boku i wysokosci:";
		}

	

	
		else
		{

			area = (firstNumber * height) / 2;

		}std::cout << "pole wynosi: " << area << "\n";
	
}

void task2()
{
	float numberFromUser;

	std::cout << "podaj wiek:";
	std::cin >> numberFromUser;
	
	
	{if(numberFromUser >= 18)
		{
			std::cout << "jest to osoba pelnoletnia";
		}
	
	
	
	else
	{
		std::cout << "osoba jest niepelnoletnia";
	}	}


}
int main()
{
	task1();

}

