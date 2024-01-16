#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string name;
	int birthyear;
	string position;
	float salary;
	string education;
public:
	Employee();
	Employee(string name, int birthyear, string position, float salary, string education);

	string getName() const;
	int getBirthYear() const;
	string getPosition() const;
	float getSalary() const;
	string getEducation() const;

	void setName(string name);
	void setBirthYear(int birthyear);
	void setPosition(string position);
	void setSalary(float salary);
	void setEducation(string education);

	bool isOlderThan60() const;
	void show() const;
};

