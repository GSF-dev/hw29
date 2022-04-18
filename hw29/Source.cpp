#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include "Functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//task 1
	ofstream out;
	out.open("file.txt", ios::app);
	if (out.is_open()) {
		string input;
		do {
			cout << "Задача 1.\nВведите строку:" << endl;
			getline(cin, input);
			out << input << endl;
		} while (input != "end");
	}
	else
		cout<<"Ошибка открытия файла"<<endl;
	out.close();
	ifstream in;
	in.open("file.txt");
	if (in.is_open()) {
		while (!in.eof()) {
			string str;
			getline(in, str);
			cout << str << endl;
		}
	}
	else
		cout << "Ошибка открытия файла"<<endl;
	in.close();
	remove("file.txt");
	//task 2
	cout << "Задача 2\nВведите строку:" << endl;
	string input;
	if (ovewrite("file.txt", input))
		cout << "Замена строки произошла успешно!";
	else
		cout << "Файла не существует";

	return 0;
}