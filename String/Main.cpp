#include <iostream>
#include <string> //Библиотека содержащая в себе функции и метды класса std::string



int main() {
	system("chcp 1251>null");
	//system("cls"); //отчистка  консоли 
	int n;

	//Строки С
	
	char cstr[6]{ 'H', 'e', 'l', 'l', 'o', '\0'};
	for (int i = 0; i < 5; i++)
		std::cout << cstr[i];
	std::cout << std::endl;

	std::cout << cstr << std::endl;



	char cstr2[] = "Hello World!";
	std::cout << cstr2 << std::endl;
	

	//Строки С++
	
	std::string mystr; // пустая строка ("")
	mystr = "Hello World!";
	std::cout << mystr << std::endl;

	std::string mystr1 = "Green", mystr2 = "Apple";
	std::string mystr3 = mystr1 + ' ' + mystr2 + '!';
	std::cout << mystr3 << std::endl;

	mystr2 += "...";
	std::cout << mystr2 << std::endl;
	

	// Ввод строки 
	
	std::string name;
	std::cout << "Введите имя -> ";
	//std::cin >> name; // Проблема, ввод 1 лишь слова.
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";

	std::cout << "Сколько вам лет? -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и  мене было " << age << "...\n";

	std::cin.ignore();


	std::cout << "Кем ты раб? -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Всегда хотел стать " << job << "ом!\n";
	

	//методы строк
	std::string str = "Hello World!";

	// Методы size и length, возвращающие длину строки 
	std::cout << str.size() << std::endl; // 12
	std::cout << str.length() << std::endl; // 12

	// Метод insert встав. подстроку в строку 
	str.insert(3, "###");
	std::cout << str << std::endl; //Hel###lo World!

	//Метод replace заменяющий часть строки на новую
	str.replace(3, 5, "!!!");
	std::cout << str << std::endl; //Hel!!!rld!

	// Метод find и rfinde, реализующие линейный поиск внутри строки 
	std::cout << str.find('l') << std::endl;	 // 2
	std::cout << str.find('l', 5) << std::endl;  // 9
	std::cout << str.rfind('o') << std::endl;	 // 7
	std::cout << str.rfind('o', 5) << std::endl; // 4

	// Метод substr, извлекающий подстроку из строки
	std::cout << str.substr(4) << std::endl; // o world!
	std::cout << str.substr(3, 6) << std::endl; // lo wor
	


	//Изменение регистра строки
	std::string s1 = "Hello World!";
	for (int i = 0; i < s1.length(); i++)
		s1[i] = std::toupper(s1[i]);
	std::cout << s1 << std::endl;





	return 0;
}