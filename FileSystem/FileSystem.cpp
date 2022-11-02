// Персональный шаблон
#include <iostream>
#include <string>
#include <fstream> // библиотека Filestream файловый поток
bool statistic(std::string str);
int main() {
	setlocale(LC_ALL, "Russian");
	std::string path = "file.txt";// путь к файлу
	//запись в файл
	/*
	std::ofstream out;   //если использовать конструктор ofstream out(path);-используется только один раз
	out.open(path,std::ios::app);
	if (out.is_open()) {//true если файл открыт успешно
		std::cout << "файл открыт для записи\n";
		std::string tmp;
		std::cout << "Введите строку ->";
		getline(std::cin, tmp);
		out << tmp + '\n';
	}
	else
		std::cout << "Ошибка открытия файла!\n";
	out.close();
	*/
	//чтение из файла
	/*
	std::ifstream in;
	in.open(path);
	if (in.is_open()) { // проверка на открытия файла обязательна!!
		std::cout << "Файл открыт для четния.\nСодержимое файла:\n";		
		//первый способ : посимвольное считывание
		char sym;
		while (in.get(sym))
			std::cout << sym;
		
		//второй способ: пословное считывание
		while (!in.eof()) {
			std::string tmp;
			in >> tmp;
			std::cout << tmp<<' ';
		}	
		std::cout << "Ошибка открытия файла\n";
		
		//третий способ: построчное считывание
		std::string str;
		while (getline(in, str))
			std::cout << str << '\n';
	}
	else
		std::cout << "Ошибка открытия файла\n";	
	in.close();
	*/
	//удаление файла
	/*
	if (!remove(path.c_str()))
		std::cout << "File is done\n";
	else
		std::cout << "Error denaed file\n";
	*/
	//Задача 1 . statidtic
	std::cout << "ВВедите первое слово->";
	std::string str;
	std::cin >> str;
	if (statistic(str))
		std::cout << "Первое слово записано!\n";
	else
		std::cout << "Ошибка ввода!\n";
	std::cout << "ВВедите второе слово->";
	std::cin >> str;
	if (statistic(str))
		std::cout << "Второе слово записано!\n";
	else
		std::cout << "Ошибка ввода!\n\n";
	return 0;
}
bool statistic(std::string str) {
	std::string path = "file.txt";
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << str +' ' << str.length() << '\n';
		out.close();
		return true;
	}
	else{
		out.close();
		return false;		
	}
}