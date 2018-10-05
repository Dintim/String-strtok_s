#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string>
using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num;	
	cout << "enter number: ";
	cin >> num;

	switch (num)
	{
	case 1:
	{
		//String41◦. Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). 
		//Найти количество слов в строке.
		char a[]="  На большей  части Казахстана    синоптики прогнозируют   осадки в виде дождя ";
		cout << a << endl;
		char* context;
		char* p = strtok_s(a, " ", &context);
		int sum = 0;
		while (p) {
			sum++;
			p = strtok_s(NULL, " ", &context);
		}
		cout << "number of words: " << sum << endl;		
	}
	break;

	case 2:
	{
		//String42. Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами 
		//(одним или несколькими). Найти количество слов, которые начинаются и заканчиваются одной и той же буквой. 
		char a[] = " ЭТО ПОЛНАЯ АБРАКАДАБРА, БОБ,  ДЕРЕВО,   РАДАР ";
		cout << a << endl;
		char* context;
		char* p = strtok_s(a, " ,.-", &context);
		int sum = 0;
		while (p) {
			if (p[0] == p[strlen(p) - 1])
				sum++;
			p = strtok_s(NULL, " ,.-", &context);
		}
		cout << "number of words begin and end in same char: " <<sum << endl;
	}
	break;

	case 3:
	{
		//String43. Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами 
		//(одним или несколькими). Найти количество слов, которые содержат хотя бы одну букву «А». 
		char a[] = "В   ГОРНЫХ РАЙОНАХ СТРАНЫ ВОЗМОЖНЫ   СИЛЬНЫЕ ДОЖДИ   С ПЕРЕХОДОМ В ГРАД, СНЕГ";
		cout << a << endl;
		char* tmp;
		char* p = strtok_s(a, " ,.-", &tmp);
		int sum = 0;
		while (p) {
			bool f = false;
			for (int i = 0; i < strlen(p); i++) {
				if (p[i] == -64) 
					f = true;
			}
			if (f) sum++;
			p = strtok_s(NULL, " ,.-", &tmp);
		}
		cout << "number of words containing 'A' char: " << sum << endl;
	}
	break;

	case 4:
	{
		//String44. Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами 
		//(одним или несколькими). Найти количество слов, которые содержат ровно три буквы «А». 
		char a[] = "ПО  ДАННЫМ АМЕРИКААНСКОЙ   АССОЦИАЦИИ, ОТ ТАБАКА УМИРАЕТ ПО    6 МИЛЛИОНОВ ЧЕЛОВЕК В ГОД";
		cout << a << endl;
		char* tmp;
		char* p = strtok_s(a, " ,.-", &tmp);
		int sum = 0;
		while (p) {
			int k = 0;
			for (int i = 0; i < strlen(p); i++) {
				if (p[i] == 'А') k++;
			}
			if (k == 3) sum++;
			p = strtok_s(NULL, " ,.-", &tmp);
		}
		cout << "number of words containing 3 'A' character: " << sum << endl;
	}
	break;

	}

	
	system("pause");
	return 0;
}