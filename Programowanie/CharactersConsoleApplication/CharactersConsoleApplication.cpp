
#include <iostream>

/*
**Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
*
*
*
*
* Program wyci�gaj�cy formacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).

* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

//Napisz program ktory pobierze znak
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak: ";
	std::cin >> characterFromUser;
	std::cout << characterFromUser;
}

//Napisz program, kt�ry wczyta znak z klawiatury 
//i sprawdzi czy to ma�a litera alfabetu.
void task2()
{
	char characterFromUser;
	std::cout << "Podaj znak: ";
	std::cin >> characterFromUser;

	//if(characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Ma�a litera alfabetu.\n";
	else
		std::cout << "Nie ma�a litera alfabetu.\n";

	/*char x = 'a';
	std::cout << x;
	x = 'g' + 1;
	std::cout << x;

	*/
}

//Napisz program, kt�ry poprosi o podanie imienia i sie przywita.
void task3()
{
	std::string username = "";
	std::cout << "Podaj imie: ";
	std::cin >> username;
	std::cout << "Witaj " << username << "\n";
}

//Napisz program, kt�ry sprawdzi czy podane has�o jest poprawne
//np. jesli haslo = abc123 wyswietli poprawne has�o.
//jesli nie wyswietli niepoprawne has�o.
void task4()
{
	std::string password;
	std::cout << "Podaj has�o: ";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "Haslo poprawne\n";
	else
		std::cout << "Haslo niepoprawne\n";
}

//Napisz program, kt�ry wczyta �a�cuch znak�w i policzy ile jest ma�ych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj �a�cuch znak�w\n";
	std::cin >> textFromUser;

	int numerOfCharacters = 0;

	/*std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	std::cout << "Ilo�� znakow " << textFromUser.length() << "\n";*/

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numerOfCharacters++;
	}
	std::cout << "Jest " << numerOfCharacters << " liter 'a'\n";
}

//Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
	std::string password;
	std::cout << "Podaj has�o: ";
	std::cin >> password;

	do
	{
		std::cout << "Podaj has�o: ";
		std::cin >> password;
		if (password == "abc123")
			std::cout << "Haslo poprawne\n";
		else
			std::cout << "Haslo niepoprawne\n";

	} while (password != "abc123");

}

//01000001 01110010 01110100 01110101 01110010 01001011
//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{
	std::string characterFromUser;
	std::cout << "Podaj cig znak�w: ";
	std::cin >> characterFromUser;

	//samog�oska
	int numberOfVowel = 0;
	//sp�g�oska
	int numberOfConsonant = 0;

	for (int i = 0; i < characterFromUser.length(); i++)
	{
		if (characterFromUser[i] == 'a'
			|| characterFromUser[i] == '�'
			|| characterFromUser[i] == 'e'
			|| characterFromUser[i] == '�'
			|| characterFromUser[i] == 'i'
			|| characterFromUser[i] == 'o'
			|| characterFromUser[i] == 'u'
			|| characterFromUser[i] == 'y')
			numberOfVowel++;
		else if (characterFromUser[i] >= 'a' && characterFromUser[i] <= 'z')
			numberOfConsonant++;
	}
	std::cout << "W tym ciagu jest " << numberOfVowel << " samog�osek i " << numberOfConsonant << " sp�g�osek\n";
}

//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem
//(czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task8()
{
	int t = 0;
	std::string characterFromUser;
	std::string reverse;
	std::cout << "Podaj ciag znakow: ";
	std::cin >> characterFromUser;

	//wersja 1
	/*for (int i = characterFromUser.length() - 1; i >= 0; i--)
	{
		reverse = reverse + characterFromUser[i];
	}

	if (characterFromUser == reverse)
		std::cout << "Text jest palindromem\n";
	else
		std::cout << "Text nie jest palindromem\n";*/

	//wersja 2
	int t = 0;
	std::string textFromUser;
	std::string reverse;
	std::cout << "Podaj ciag znakow: ";
	std::cin >> textFromUser;

	bool isPalindrome = true;

	for (int signFromBegining = 0, signFormEnd = textFromUser.length() - 1; signFromBegining < signFormEnd; signFromBegining++, signFormEnd--)
	{
		if (textFromUser[signFromBegining] != textFromUser[signFormEnd])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome)
		std::cout << "Ten tekst jest palindromem\n";
	else
		std::cout << "Ten tekst nie jest palindromem\n";
}

//Program sprawdzaj�cy czy podane dwa s�owa s� anagramami
//(czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
void task9()
{
	std::string firstText;
	std::string secoundText;
	std::cout << "Podaj 1 ci�g: ";
	std::cin >> firstText;
	std::cout << "Podaj 1 ci�g: ";
	std::cin >> firstText;

	for (int i = 0; i < firstText.length(); i++)
	{
		for (int j = 0; j < secoundText.length(); j++)
		{
			if (firstText[i] == secoundText[j])
				;
		}
	}
}
void task10()
//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
{
	int numFromUser;
	int tmpNum;
	int rest;
	std::string numberInBin;
	std::cout << "Podaje liczbe: ";
	std::cin >> numFromUser;
	tmpNum = numFromUser;
	
	do
	{
		rest = tmpNum % 2;
		//numberInBin = numberInBin + rest;
		if (rest == 0)
			numerInBin = numberInBin + '0';
		else
			numerInBin = numerInBin + '1';
		 
		
		tmpNum = tmpNum / 2;
	} while (tmpNum == 0);

	std::cout << numberInBin << "\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task8();
}

/*
Typy znakow:
* char - 1 bajt ca�owito liczbowa <-128; 127> 'a'
* std::string - ciag znakow "abc123"

*/