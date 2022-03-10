#include <iostream>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	string str;
	string str1, str2;
	cout << "Введите строку:\n";
	getline(cin, str1);
	string str3 = str1.substr(5);
	cout << str3 << endl;
	/*cout << "Введите строку:\n";
	getline(cin, str1);
	cout << "Введите подстроку:\n";
	getline(cin, str2);
	//str1.insert(2, str2);
	//str1.replace(4, 1, str2);
	//int index = str1.find(str2, 6);
	int index = str1.rfind(str2,6);
	cout << index << endl;*/

	/*int len = str.size();
	cout << "Длина строки \"" + str + "\" = " << len << endl;
	cout << str.length() << endl;*/

	/*char word[4] = {'H' , 'i', '!', '\0'};
	for (int i = 0; i < 4; i++)
		cout << word[i];
	cout << endl;

	char line[] = "Hello, world";
	cout << line << endl;

	cout << line[1] << line[3] << endl;

	char sym = line[2];

	line[0] = 'S';
	cout << line << endl;*/ 

	/*// cout << "Введите слово: ";
	// cin >> str;
	// cout << "Вы ввели слово: " << str << endl;
	cout << "Введите предложение: ";
	getline(cin, str);
	cout << "Вы ввели предложение: " << str << endl;
	str = "hi!";
		for(int i = 2; i >= 0; i--)
			cout << str[i];
	cout << endl;

	str = "Hello\nworld";
	cout << str << endl;*/

	/*str = "hello, world";
	cout << str << endl;
	str = "bye, world" ;
	cout << str << endl;
	str = "oranges";
	string str2 = "apples";
	cout << str + " and " + str2 << endl; // можно заменить + на << // с числовыми типами данных только << 
	string str3 = str2 + " without " + str;
	cout << str3 << endl;

	string str4 = "grapes";
	str4 += " and kiwi ";
	cout << str4 << endl;

	if (str == "oranges")
		cout << "TRUE";
	else
		cout << "FALSE";*/



	return 0;
}