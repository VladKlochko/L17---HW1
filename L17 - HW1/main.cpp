#include "Employee.h"
#include <clocale>
int main()
{
	setlocale(0, "Rus");
	Employee arr[5] = { 
        {"����", 1950, "�������", 50000, "������"},
        {"ϸ��", 1965, "��������", 60000, "�������"},
        {"�����", 2000, "�����������", 70000, "������"},
        {"Ը���", 1985, "��������", 80000, "������"},
        {"������", 1970, "���������", 55000, "�������"} };
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        arr[i].show();
    }
    cout << "----------------------------------" << endl;
    cout << "������ 60: " << endl;
    for (int i = 0; i < 5; i++) 
    {
        if (arr[i].isOlderThan60()) 
        {
            arr[i].show();
            count++;
        }
    }
}