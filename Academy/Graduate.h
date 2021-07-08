#pragma once
#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
class Graduate :public Student
{
	string topic;
public:
	const string& get_topic()const
	{
		return this->topic;
	}
	void set_topic(const string& topic)
	{
		this->topic = topic;
	}

	Graduate
	(
		HUMAN_TAKE_PARAMETERS,
		STUDENT_GET_PARAMETERS,
		const string& topic
	) :Student(HUMAN_GIVE_PARAMETERS, STUDENT_GIVE_PARAMETERS),
		topic(topic)
	{
		cout << "GConstroctor:\t" << this << endl;
	}
	~Graduate()
	{
		cout << "GDestroctor:\t" << this << endl;
	}
	void info()const
	{
		Student::info();
		cout << "Òåìà äèïëîìíîãî ïðîåêòà: " << topic << endl;
	}
};