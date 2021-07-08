#pragma once
#include<iostream>
#include<string>
#include"Human.h"
class Teacher :public Human
{
	string speciality;
	unsigned int experience;
public:
	const string& get_speciality()const
	{
		return speciality;
	}
	unsigned int get_experience()const
	{
		return experience;
	}
	void set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	void set_experience(unsigned int experience)
	{
		this->experience = experience;
	}
	//Constructurs
	Teacher
	(
		HUMAN_TAKE_PARAMETERS,
		TEACHER_GET_PARAMETERS
	) :Human(HUMAN_GIVE_PARAMETERS)
	{
		set_speciality(speciality);
		set_experience(experience);
		cout << "TConstructor:\t" << this << endl;
	}
	~Teacher()
	{
		cout << "TDestructor:\t" << this << endl;
	}

	//Methods
	void info()const
	{
		Human::info();
		cout << speciality << ", îïûò ïðåïîäàâàíèÿ " << experience << " ëåò." << endl;
	}
};
