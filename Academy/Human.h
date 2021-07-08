#pragma once
#include<iostream>
#include<string>
using namespace std;

#define HUMAN_TAKE_PARAMETERS	const string& last_name, const string& first_name, unsigned int age
#define STUDENT_GET_PARAMETERS	const string& speciality, const string& group, double rating
#define TEACHER_GET_PARAMETERS	const string& speciality, unsigned int experience

#define HUMAN_GIVE_PARAMETERS	last_name, first_name, age
#define STUDENT_GIVE_PARAMETERS speciality, group, rating
#define TEACHER_GIVE_PARAMETERS speciality, experience

class Human
{
	string last_name;
	string first_name;
	unsigned int age;
public:
	const string& get_last_name()const
	{
		return last_name;
	}
	const string& get_first_name()const
	{
		return first_name;
	}
	unsigned int get_age()const
	{
		return age;
	}
	void set_last_name(const string& last_name)
	{
		this->last_name = last_name;
	}
	void set_first_name(const string& first_name)
	{
		this->first_name = first_name;
	}
	void set_age(unsigned int age)
	{
		this->age = age;
	}

	Human(const string& last_name, const string& first_name, unsigned int age)
	{
		set_last_name(last_name);
		set_first_name(first_name);
		set_age(age);
		cout << "HConstructor:\t" << this << endl;
	}
	virtual ~Human()
	{
		cout << "HDestructor:\t" << this << endl;
	}

	virtual void info()const
	{
		cout << last_name << " " << first_name << ", " << age << " ëåò" << endl;
	}
};
