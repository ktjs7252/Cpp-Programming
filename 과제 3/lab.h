#pragma once
#include <iostream>
#include <string>

using namespace std;

class Lab
{
private:
	static int index;
	string name;
	bool hasChief;
	int num;
public:
	Lab(string name, bool hasChief, int num)
	{
		++index;

		this->name = name;
		this->hasChief = hasChief;
		this->num = num;
		
	}
	void addStudent(int num,int n)
	{
		num=applyLab(num,n);
	}
	void printLab()
	{
		cout << "연구실 이름:" << name << endl;
	}
};

int applyLab(int num,int n)
{
	return num += n;
}
class Student
{
private:
	string name;
	string tel;
public:
	Student(string n = "", string t = "") :name{ n }, tel{ t } {};
	void print()
	{
		cout << name << ", " << tel << endl;
	}
};
