#pragma once
#include<iostream>
#include<string>
#include "Human.h"
using namespace std;

class Student :public Human
{
	string speciality;
	string group;
	double rating;
public:
	const string& get_speciality()const
	{
		return speciality;
	}
	const string& get_group()const
	{
		return group;
	}
	double get_rating()const
	{
		return rating;
	}
	void set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	void set_group(const string& group)
	{
		this->group = group;
	}
	void set_rating(double rating)
	{
		this->rating = rating;
	}
	//		Constructors
	Student
	(
		HUMAN_TAKE_PARAMETERS,
		STUDENT_GET_PARAMETERS
	) :Human(HUMAN_GIVE_PARAMETERS)
	{
		set_speciality(speciality);
		set_group(group);
		set_rating(rating);
		cout << "SConstructor:\t" << this << endl;
	}
	~Student()
	{
		cout << "SDestructor:\t" << this << endl;
	}

	//Methods
	void info()const
	{
		Human::info();
		cout << speciality << ", " << group << ", óñïåâàåìîñòü: " << rating << endl;
	}
};
