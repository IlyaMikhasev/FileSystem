// ������������ ������
#include <iostream>
#include <string>
#include <fstream> // ���������� Filestream �������� �����
bool statistic(std::string str);
int main() {
	setlocale(LC_ALL, "Russian");
	std::string path = "file.txt";// ���� � �����
	//������ � ����
	/*
	std::ofstream out;   //���� ������������ ����������� ofstream out(path);-������������ ������ ���� ���
	out.open(path,std::ios::app);
	if (out.is_open()) {//true ���� ���� ������ �������
		std::cout << "���� ������ ��� ������\n";
		std::string tmp;
		std::cout << "������� ������ ->";
		getline(std::cin, tmp);
		out << tmp + '\n';
	}
	else
		std::cout << "������ �������� �����!\n";
	out.close();
	*/
	//������ �� �����
	/*
	std::ifstream in;
	in.open(path);
	if (in.is_open()) { // �������� �� �������� ����� �����������!!
		std::cout << "���� ������ ��� ������.\n���������� �����:\n";		
		//������ ������ : ������������ ����������
		char sym;
		while (in.get(sym))
			std::cout << sym;
		
		//������ ������: ��������� ����������
		while (!in.eof()) {
			std::string tmp;
			in >> tmp;
			std::cout << tmp<<' ';
		}	
		std::cout << "������ �������� �����\n";
		
		//������ ������: ���������� ����������
		std::string str;
		while (getline(in, str))
			std::cout << str << '\n';
	}
	else
		std::cout << "������ �������� �����\n";	
	in.close();
	*/
	//�������� �����
	/*
	if (!remove(path.c_str()))
		std::cout << "File is done\n";
	else
		std::cout << "Error denaed file\n";
	*/
	//������ 1 . statidtic
	std::cout << "������� ������ �����->";
	std::string str;
	std::cin >> str;
	if (statistic(str))
		std::cout << "������ ����� ��������!\n";
	else
		std::cout << "������ �����!\n";
	std::cout << "������� ������ �����->";
	std::cin >> str;
	if (statistic(str))
		std::cout << "������ ����� ��������!\n";
	else
		std::cout << "������ �����!\n\n";
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