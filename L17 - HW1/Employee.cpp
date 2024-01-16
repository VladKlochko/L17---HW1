#include "Employee.h"

Employee::Employee()
{
    name = "undefined";
    birthyear = 0;
    position = "undefined";
    salary = 0.0;
    education = "undefined";
}

Employee::Employee(string name, int birthyear, string position, float salary, string education)
{
    setName(name);
    setBirthYear(birthyear);
    setPosition(position);
    setSalary(salary);
    setEducation(education);

}

string Employee::getName() const
{
    return name;
}

int Employee::getBirthYear() const
{
    return birthyear;
}

string Employee::getPosition() const
{
    return position;
}

float Employee::getSalary() const
{
    return salary;
}

string Employee::getEducation() const
{
    return education;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setBirthYear(int birthyear)
{
    this->birthyear = birthyear;
}

void Employee::setPosition(string position)
{
    this->position = position;
}

void Employee::setSalary(float salary)
{
    this->salary = salary;
}

void Employee::setEducation(string education)
{
    this->education = education;
}

bool Employee::isOlderThan60() const
{
    int currentYear = 2024;
    return (currentYear - birthyear) > 60;
}

void Employee::show() const
{
    cout << "Работник:\n"
        << "Имя: " << name << endl
        << "Год Рождения: " << birthyear << endl
        << "Должность: " << position << endl
        << "Зарплата: " << salary << endl
        << "Образование: " << education << endl;
}
