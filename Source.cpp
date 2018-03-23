// Пользователь вводит строку.
//Необходимо написать программу, которая находит в этой строке определенную подстроку
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string str;   //заводим переменную строки
	cout << "Ââåäèòå ñòðîêó: ";
	getline(cin, str);    //ввод строку
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a'&&str[i + 1] == 'b'&&str[i + 2] == 'c') {      //условия стоящих под ряд нужных символов
			cout << "Èñêîìàÿ ñòðîêà: " << str[i] << str[i + 1] << str[i + 2] << endl;        //вывод искомой строки на экран
		}
	}
	system("pause");
}
