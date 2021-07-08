#include<iostream>
#include<string>
#include<ctime>
#include "Graduate.h"
#include "Teacher.h"
using namespace std;

#define delimiter "\n------------------------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	Human* group[] =
	{
		new Student("Батодалаев", "Даши", 16, "РПО", "PD_011", 5),
		new Student("Загидуллин", "Линар", 32, "РПО", "PD_011", 5),
		new Graduate("Шугани", "Сергей", 15, "РПО", "PD_011", 5, "Защита персональных данных"),
		new Teacher("Эйнштейн", "Альберт", 141, "Астрофизика", 110),
		new Student("Маркин", "Даниил", 17, "РПО", "BV_011", 5),
		new Teacher("Рихтер", "Джеффри", 45, "Windows разработчик", 20)
	};
	cout << sizeof(group) << endl;

	cout << delimiter << endl;;
	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		group[i]->info();
		cout << delimiter << endl;;
	}

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		delete group[i];
	}
}