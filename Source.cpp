// ������������ ������ ������.
//���������� �������� ���������, ������� ������� � ���� ������ ������������ ���������
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string str;   //������� ���������� ������
	cout << "������� ������: ";
	getline(cin, str);     //���� ������
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a'&&str[i + 1] == 'b'&&str[i + 2] == 'c') {      //������� ������� ��� ��� ������ ��������
			cout << "������� ������: " << str[i] << str[i + 1] << str[i + 2] << endl;         //����� ������� ������ �� �����
		}
	}
	system("pause");
}